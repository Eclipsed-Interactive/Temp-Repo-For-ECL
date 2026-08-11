#pragma once

#include "EclipsedEngine.Core.hpp"

#include "Core/Timer.h"
#include "EclipsedEngine/UI/UI.h"

namespace Eclipse
{
	class ECL_API EngineContext
	{
		Core::Timer& Time;
		UI Ui;
	};
}