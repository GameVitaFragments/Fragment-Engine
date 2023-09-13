#pragma once

#include "Defines.hpp"
#include <SDL2/SDL.h>

namespace Frag {

class Window {
private:
    u32 m_width, m_height;
    const char* m_title;
    bool m_isClosed;

    SDL_Window* m_window;

public:
    Window(u32 w, u32 h, const char* t);
    void PollEvents();
    void run();
    ~Window();
};

}
