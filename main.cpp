#include "FragEngine.hpp"
#include "transform.hpp"

#define WIDTH 800
#define HEIGHT 600

class Bird : Frag::Entity {
public:
    Bird() {
        this->init();
    }
    void init() override {
        this->addComponent<Frag::Comp::Transform>();
        auto transform = this->getComponents<Frag::Comp::Transform>()[0];
        transform->position = {WIDTH*0.5, HEIGHT*0.5, 0};
        transform->rotation = {0, 0};
        transform->scale = {10, 10, 0};
    }

    void update() override {

    }
};

int main() {
    Bird flappy;

    Frag::Window win(WIDTH, HEIGHT, "Fragment Engine");
    // Frag::Renderer rend(win);

    win.Run();
    //log.write("Hello World Logging Exists");
}
