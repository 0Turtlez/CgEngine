//
// Created by miste on 3/6/2026.
//

#include "KeyCodes.h"

#include <GLFW/glfw3.h>

namespace lavender::input {
    KeyCode glfwToLavenderKey(int glfwKey) {
        switch (glfwKey) {
            case GLFW_KEY_W: return KeyCode::W;
            case GLFW_KEY_S: return KeyCode::S;
            case GLFW_KEY_A: return KeyCode::A;
            case GLFW_KEY_D: return KeyCode::D;
            case GLFW_KEY_ESCAPE: return KeyCode::Escape;
            case GLFW_KEY_SPACE: return KeyCode::Space;
            default: return KeyCode::Unknown;
        }
    }
}
