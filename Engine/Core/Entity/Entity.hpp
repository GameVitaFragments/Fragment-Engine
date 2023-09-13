#pragma once

#include <ECS.h>

namespace Frag {

class Entity : public ECS::Entity {
public:
    virtual void init() = 0;
    virtual void update() = 0;
};

}
