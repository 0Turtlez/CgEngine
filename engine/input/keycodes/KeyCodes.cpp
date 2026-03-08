//
// Created by miste on 3/6/2026.
//

#include "KeyCodes.h"

#include <GLFW/glfw3.h>

namespace lavender::input {
    KeyCode glfwToLavenderKey(int glfwKey) {
        switch (glfwKey) {
            case GLFW_KEY_A: return KeyCode::A;
            case GLFW_KEY_B: return KeyCode::B;
            case GLFW_KEY_C: return KeyCode::C;
            case GLFW_KEY_D: return KeyCode::D;
            case GLFW_KEY_E: return KeyCode::E;
            case GLFW_KEY_F: return KeyCode::F;
            case GLFW_KEY_G: return KeyCode::G;
            case GLFW_KEY_H: return KeyCode::H;
            case GLFW_KEY_I: return KeyCode::I;
            case GLFW_KEY_J: return KeyCode::J;
            case GLFW_KEY_K: return KeyCode::K;
            case GLFW_KEY_L: return KeyCode::L;
            case GLFW_KEY_M: return KeyCode::M;
            case GLFW_KEY_N: return KeyCode::N;
            case GLFW_KEY_O: return KeyCode::O;
            case GLFW_KEY_P: return KeyCode::P;
            case GLFW_KEY_Q: return KeyCode::Q;
            case GLFW_KEY_R: return KeyCode::R;
            case GLFW_KEY_S: return KeyCode::S;
            case GLFW_KEY_T: return KeyCode::T;
            case GLFW_KEY_U: return KeyCode::U;
            case GLFW_KEY_V: return KeyCode::V;
            case GLFW_KEY_W: return KeyCode::W;
            case GLFW_KEY_X: return KeyCode::X;
            case GLFW_KEY_Y: return KeyCode::Y;
            case GLFW_KEY_Z: return KeyCode::Z;

            case GLFW_KEY_0: return KeyCode::D0;
            case GLFW_KEY_1: return KeyCode::D1;
            case GLFW_KEY_2: return KeyCode::D2;
            case GLFW_KEY_3: return KeyCode::D3;
            case GLFW_KEY_4: return KeyCode::D4;
            case GLFW_KEY_5: return KeyCode::D5;
            case GLFW_KEY_6: return KeyCode::D6;
            case GLFW_KEY_7: return KeyCode::D7;
            case GLFW_KEY_8: return KeyCode::D8;
            case GLFW_KEY_9: return KeyCode::D9;

            case GLFW_KEY_ESCAPE: return KeyCode::Escape;
            case GLFW_KEY_ENTER: return KeyCode::Enter;
            case GLFW_KEY_TAB: return KeyCode::Tab;
            case GLFW_KEY_BACKSPACE: return KeyCode::Backspace;
            case GLFW_KEY_INSERT: return KeyCode::Insert;
            case GLFW_KEY_DELETE: return KeyCode::Delete;

            case GLFW_KEY_RIGHT: return KeyCode::Right;
            case GLFW_KEY_LEFT: return KeyCode::Left;
            case GLFW_KEY_DOWN: return KeyCode::Down;
            case GLFW_KEY_UP: return KeyCode::Up;

            case GLFW_KEY_LEFT_SHIFT: return KeyCode::LeftShift;
            case GLFW_KEY_LEFT_CONTROL: return KeyCode::LeftControl;
            case GLFW_KEY_LEFT_ALT: return KeyCode::LeftAlt;
            case GLFW_KEY_LEFT_SUPER: return KeyCode::LeftSuper;
            case GLFW_KEY_RIGHT_SHIFT: return KeyCode::RightShift;
            case GLFW_KEY_RIGHT_CONTROL: return KeyCode::RightControl;
            case GLFW_KEY_RIGHT_ALT: return KeyCode::RightAlt;
            case GLFW_KEY_RIGHT_SUPER: return KeyCode::RightSuper;

            case GLFW_KEY_SPACE: return KeyCode::Space;

            default: return KeyCode::Unknown;
        }
    }
}
