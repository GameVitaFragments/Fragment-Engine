#include "Window.hpp"
#include <cstddef>

Frag::Window::Window(u32 w, u32 h, const char* t) : m_width(w), m_height(h), m_title(t) {
    m_isClosed = false;
    m_window = SDL_CreateWindow(
        m_title,
        0, 
        0,
        m_width,
        m_height,
        SDL_WINDOW_RESIZABLE
    );
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

void Frag::Window::run() {
    while (!this->m_isClosed) {
        this->PollEvents();
    }
}

Frag::Window::~Window() {
    SDL_DestroyWindow(m_window);
}
