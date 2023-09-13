#include "Window.hpp"
#include "ECS.h"

#include <cmath>
#include <cstdio>

Frag::Window::Window(u32 w, u32 h, const char* t) : m_width(w), m_height(h), m_title(t) {
    if (!SDL_Init(SDL_INIT_EVERYTHING)) {
        // TODO : Add a logger -> Gowrish
        std::cout << SDL_GetError() << std::endl;
        SDL_Quit();
    }

    m_isClosed = false;
    m_window = SDL_CreateWindow(
        m_title,
        0, 
        0,
        m_width,
        m_height,
        SDL_WINDOW_RESIZABLE
    );

    if (!this->m_window) {
        std::cout << SDL_GetError() << std::endl;
        SDL_Quit();
    }

    ECS::System::initAllSystems();
}

void Frag::Window::PollEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                this->m_isClosed = true;
                break;
        }
    }
}

void Frag::Window::Run() {
    while (!this->m_isClosed) {
        this->PollEvents();
        ECS::System::updateAllSystems(0);
    }
}

Frag::Window::~Window() {
    SDL_DestroyWindow(m_window);
    SDL_Quit();
}
