//
// Created by Zachary on 3/5/26.
//

#include "Keyboard.h"


namespace lavender::input {

    std::array<bool, 256> Keyboard::s_KeyStates = { false };

    bool Keyboard::isKeyDown(KeyCode key) {
        return s_KeyStates[static_cast<std::size_t>(key)];
    }

    void Keyboard::setKeyState(KeyCode key, bool pressed) {
        if (key != KeyCode::Unknown) {
            s_KeyStates[static_cast<std::size_t>(key)] = pressed;
        }
    }
}
