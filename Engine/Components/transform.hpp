#pragma once

#include <Defines.hpp>

#include <ECS.h>

namespace Frag {

namespace Comp {

struct Transform : ECS::Component {
    v3 position;
    v2 rotation;
    v3 scale;
};

};

}
