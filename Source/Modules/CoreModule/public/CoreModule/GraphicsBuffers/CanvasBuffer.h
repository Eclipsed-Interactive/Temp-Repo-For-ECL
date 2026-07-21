#pragma once

#include "CoreModule/Math/Vector/Vector2.h"

namespace Eclipse
{
    struct CanvasBuffer
    {
        //float resolutionRatio;
        Math::Vector2f canvasScaleRelationOneDiv;
        Math::Vector2f canvasPositionOffset;
    };
}