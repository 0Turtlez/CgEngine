//
// Created by miste on 3/8/2026.
//
#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"
#include "AudioEngine.h"
#include <iostream>


namespace lavender::audio {
    ma_engine AudioEngine::engine;
    bool AudioEngine::initialized = false;

    bool AudioEngine::init() {
        ma_result result = ma_engine_init(NULL, &engine);
        if (result != MA_SUCCESS) {
            std::cerr << "Failed to initialize audio engine." << std::endl;
            return false;
        }
        initialized = true;
        return true;
    }

    void AudioEngine::playSound(const std::string& filePath) {
        if (!initialized) return;
        ma_engine_play_sound(&engine, filePath.c_str(), NULL);
    }

    void AudioEngine::shutdown() {
        if (initialized) {
            ma_engine_uninit(&engine);
        }
    }
}
