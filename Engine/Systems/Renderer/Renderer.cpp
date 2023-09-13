#include "Renderer.hpp"
#include "ECS.h"
#include "SDL_error.h"
#include "transform.hpp"
#include <vector>

Frag::Renderer::Renderer(Frag::Window& win) {
    this->m_renderer = SDL_CreateRenderer(
        win.GetWindow(), 
        -1, 
        SDL_RENDERER_ACCELERATED
    );

    std::cout << SDL_GetError() << std::endl;

    if (!this->m_renderer) {
        std::cout << SDL_GetError() << std::endl;
        SDL_DestroyWindow(win.GetWindow());
        SDL_Quit();
    }
}

void Frag::Renderer::initSystem() {

}

void Frag::Renderer::updateSystem(float dt) {
    SDL_SetRenderDrawColor(this->m_renderer, 0, 0, 0, 0);
    SDL_RenderClear(this->m_renderer);

    SDL_SetRenderDrawColor(this->m_renderer, 255, 255, 255, 255);
    auto transforms = ECS::Registry::getTombStone<Comp::Transform>();
    for (std::size_t i = 0; i < transforms->getSize(); i++) {
        auto t = transforms->getItem(i);
        SDL_RenderDrawPoint(this->m_renderer, t->position.x, t->position.y);
    }
    SDL_RenderPresent(this->m_renderer);
}

Frag::Renderer::~Renderer() {
    SDL_DestroyRenderer(this->m_renderer);
}
