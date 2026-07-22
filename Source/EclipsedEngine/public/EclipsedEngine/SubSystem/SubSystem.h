#pragma once 

#include "CoreModule/Macros/defines.h"

namespace Eclipse
{
	class ECLIPSED_API SubSystem {
	public:
		virtual void Init() {};
		virtual void Execute() {};
	};
}