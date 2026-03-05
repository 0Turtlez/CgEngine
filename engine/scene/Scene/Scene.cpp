//
// Created by Zachary on 3/3/26.
//

#include "Scene.h"
#ifndef PI
    #define PI 3.14159265358979323846
#endif


// Update the count of vertexes of Object
void Scene::updateVertexCount(Object* obj, int vertex) {
    // Minimum 3 vertex
    if (vertex < 3) {
        vertex = 3;
    }

    obj->points.clear();

    float angle_step = 360.0 / vertex;

    // Store the polygon data based on how many vertex the shape has
    for (int v = 0; v < vertex; v++) {
        float current_angle = v * angle_step;
        float radians = current_angle * (PI / 180.0f);
        Point point;
        point.x = cos(radians);
        point.y = sin(radians);
        obj->points.push_back(point);
    }
}

// Experimental: animation code that rotates, translates and scales polygons also updates vertex count
void Scene::animateShapes(float deltaTime) {
    vertexTimer += deltaTime;
    bool shouldUpdate = false;
    if (vertexTimer >= vertexUpdateInterval) {
        shouldUpdate = true;
        vertexTimer = 0.0f;
    }
    for (Object* object : objects) {
        object->transform.rotation.z -= rotateSpeed;

        object->transform.position.x += moveSpeed * deltaTime;
        object->transform.position.y += moveSpeed * deltaTime;

        if (object->transform.position.x > 150.0f) {
            object->transform.position.x = -150.0f;
        }

        if (object->transform.position.y > 120.0f) {
            object->transform.position.y = -120.0f;
        }

        object->transform.scale = Scale(object->transform.scale.x - scaleSpeed, object->transform.scale.y - scaleSpeed);

        if (object->transform.scale.x < -20) {
            object->transform.scale = Scale(20.0f, 20.0f);
        }


        if (shouldUpdate) {
            int currentVertices = object->points.size();
            int nextVertices = currentVertices + 1;

            // update to min size when reach max size
            if (nextVertices > 12) {
                nextVertices = 3;
            }

            updateVertexCount(object, nextVertices);

        }
    }
}

// Sets up Scene by pushing all Object data to Scene
Object* Scene::createAndAdd(int vertices, Color color, bool isFilled, float thickness, Transform transform) {
    Object* newObj = new Object(Object::createPolygon(vertices, color, isFilled, thickness, transform));
    objects.push_back(newObj);
    return newObj;
}

void Scene::update(float deltaTime) {
    // Experimental Object manipulation
    animateShapes(deltaTime);
}

// Runs at start of program
void Scene::start() {
    float borderThickness = 0.0f;

    // Triangle
    tri = createAndAdd(3, Color{0.0f, 0.0f, 0.5f}, false, borderThickness, Transform());
    tri2 = createAndAdd(3, Color{1.0f, 0.0f, 0.0f}, true, borderThickness, Transform());

    // Squares
    square = createAndAdd(4, Color{0.0f, 0.5f, 1.0f}, false, borderThickness ,Transform());
    square2 = createAndAdd(4, Color{0.0f, 1.0f, 0.0f}, true, borderThickness ,Transform());

    // Pentagons
    pen = createAndAdd(5, Color{0.0f, 0.5f, 0.5f}, false, borderThickness, Transform());
    pen2 = createAndAdd(5, Color{1.0f, 1.0f, 0.0f}, true, borderThickness, Transform());

    // Hexagons
    hex = createAndAdd(6, Color{0.5f, 0.0f, 0.0f}, false, borderThickness, Transform());
    hex2 = createAndAdd(6, Color{0.0f, 0.0f, 1.0f}, true, borderThickness, Transform());

    // Heptagons
    hep = createAndAdd(7, Color{0.5f, 1.0f, 0.5f}, false, borderThickness, Transform());
    hep2 = createAndAdd(7, Color{1.0f, 0.0f, 1.0f}, true, borderThickness, Transform());

    // Octagons
    oct = createAndAdd(8, Color{0.5f, 0.5f, 0.0f}, false, borderThickness, Transform());
    oct2 = createAndAdd(8, Color{0.0f, 1.0f, 1.0f}, true, borderThickness, Transform());

    // Circles
    circle = createAndAdd(360, Color{1.0f, 0.5f, 0.5f}, false, borderThickness, Transform());
    circle2 = createAndAdd(360, Color{1.0f, 1.0f, 0.5f}, true, borderThickness, Transform());
    // Triangle
    tri->transform.position = Vector3{-85, 75};
    tri2->transform.position = Vector3{-55, 75};

    // Square
    square->transform.position = Vector3{-15, 75};
    square2->transform.position = Vector3{15, 75};

    // Pentagon
    pen->transform.position = Vector3{55, 75};
    pen2->transform.position = Vector3{85, 75};

    // Hex
    hex->transform.position = Vector3{-85, 0};
    hex2->transform.position = Vector3{-55, 0};

    // Hep
    hep->transform.position = Vector3{-15, 0};
    hep2->transform.position = Vector3{15, 0};

    // Oct
    oct->transform.position = Vector3{55, 0};
    oct2->transform.position = Vector3{85, 0};

    // Circle
    circle->transform.position = Vector3{-15,  -75};
    circle2->transform.position = Vector3{15, -75};

}