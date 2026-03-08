//
// Created by miste on 3/6/2026.
//

#ifndef LAVENDERENGINE_KEYCODES_H
#define LAVENDERENGINE_KEYCODES_H


namespace lavender::input {
    enum class KeyCode {
        Unknown = 0,
        A, B, C, D, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
        D0, D1, D2, D3, D4, D5, D6, D7, D8, D9,
        Escape, Enter, Tab, Backspace, Insert, Delete,
        Right, Left, Up, Down,
        LeftShift, LeftControl, LeftAlt, LeftSuper,
        RightShift, RightControl, RightAlt, RightSuper,
        Space, E
        // along with all the special character and potentially more along with also control pad stuff
        // Low would be tempted by SDL just by some of these perks at times
    };

    KeyCode glfwToLavenderKey(int glfwKey);
}
#endif //LAVENDERENGINE_KEYCODES_H