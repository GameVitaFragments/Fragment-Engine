#pragma once

#include <ECS.h>

namespace Frag {

class Update : ECS::System {
public:
    void initSystem() override;
    void updateSystem(float dt) override;
};

}
