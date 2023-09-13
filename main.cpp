#include <cstdio>
#include <iostream>
#include <ECS.h> 
#include <Fraglog.hpp>

#include "Engine/Core/Window/Window.hpp"

int main()
{
    FragLog log;
    Frag::Window win(640, 480, "Fragment Engine");

    win.run();

    log.write("Hello World Logging Exists");
}
