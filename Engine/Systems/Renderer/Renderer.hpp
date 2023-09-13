#pragma once

#include "Engine/Core/Window/Window.hpp"
#include <ECS.h>

namespace Frag {

class Renderer : public ECS::System {
private:
    SDL_Renderer* m_renderer;
public:
    Renderer(Frag::Window& win);
    void initSystem() ;
    void updateSystem(float dt) ;
    ~Renderer();
};

}
