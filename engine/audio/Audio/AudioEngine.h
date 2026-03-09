//
// Created by miste on 3/8/2026.
//

#ifndef LAVENDERENGINE_AUDIOENGINE_H
#define LAVENDERENGINE_AUDIOENGINE_H
#include "miniaudio.h"
#include <string>

namespace lavender::audio {
    class AudioEngine{
    public:
        static bool init();
        static void shutdown();

        static void playSound(const std::string& filePath);

    private:
        static ma_engine engine;
        static bool initialized;

    };
}


#endif //LAVENDERENGINE_AUDIOENGINE_H