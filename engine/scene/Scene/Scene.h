
//
// Created by Zachary on 3/3/26.
//

#ifndef ASM1_SCENE_H
#define ASM1_SCENE_H
#include <vector>
#include "math/Color/Color.h"
#include "math/Transform/Transform.h"
#include "core/Object/Object.h"


class Scene {
public:
    void start();           // Ran at start of program
    void update(float deltaTime);          // Ran every frame
    void animateShapes(float deltaTime);   // Experimental logic

    std::vector<lavender::core::Object*> objects;

private:
    lavender::core::Object *tri, *tri2, *square, *square2, *pen, *pen2,
    *hex, *hex2, *hep, *hep2, *oct, *oct2, *circle, *circle2;

    // private state variables
    float moveSpeed = 5.0f;
    float rotateSpeed = 1.0f;
    float scaleSpeed = 0.1f;
    float vertexTimer = 0.0f;
    float vertexUpdateInterval = 1.0f; // every 1 second

    // Eventually add an overload that will create the object for each case of inputs
    lavender::core::Object* createAndAdd(int vertices, Color color, bool isFilled, float thickness, Transform transform);
    // Update the count of vertexes of Object
    void updateVertexCount(lavender::core::Object* obj, int vertex);
};


#endif //ASM1_SCENE_H