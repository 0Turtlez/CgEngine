//
// Created by Zachary on 3/5/26.
//

#ifndef LAVENDERENGINE_KEYBOARD_H
#define LAVENDERENGINE_KEYBOARD_H
#include <array>

#include "input/keycodes/KeyCodes.h"

namespace lavender::input {
    class Keyboard {
    public:
        static bool isKeyDown(KeyCode key);
        static void setKeyState(KeyCode key, bool pressed);
    private:
        static std::array<bool, 256> s_KeyStates;
    };
}


#endif //LAVENDERENGINE_KEYBOARD_H