//
// Created by Zachary on 3/5/26.
//

#include "Random.h"

Color Random::random_color() {
    return Color(
        random_float(0.0f, 1.0f),
        random_float(0.0f, 1.0f),
        random_float(0.0f, 1.0f),
        1.0f);
}

float Random::random_deviation(float base, float deviation) {
    return random_float(base - deviation, base + deviation);
}

int Random::random_int(int min, int max) {
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(get_random());
}

float Random::random_float(float min, float max) {
    std::uniform_real_distribution<float> distribution(min, max);
    return distribution(get_random());
}

char Random::random_char(char min, char max) {
    std::uniform_int_distribution<int> distribution(static_cast<int>(min), static_cast<int>(max));
    return static_cast<char>(distribution(get_random()));
}

bool Random::random_bool() {
    std::bernoulli_distribution distribution(0.5);
    return distribution(get_random());
}

Vector2 Random::random_vector2(float min, float max) {
    return Vector2(random_float(min, max), random_float(min, max));
}

Vector3 Random::random_vector3(float min, float max) {
    return Vector3(random_float(min, max),
        random_float(min, max),
        random_float(min, max));
}

Vector4 Random::random_vector4(float min, float max) {
    return Vector4(random_float(min, max),
    random_float(min, max),
    random_float(min, max),
    random_float(min, max));
}

Vector2 Random::random_unit_vector2() {
    return random_vector2(0.0f, 1.0f).normalize();
}

Vector3 Random::random_unit_vector3() {
    return random_vector3(0.0f, 1.0f).normalize();
}

Vector4 Random::random_unit_vector4() {
    return random_vector4(0.0f, 1.0f).normalize();
}

