#pragma once

#include <string>
#include "Core/GUID.h"

namespace Eclipse::Assets
{
	struct AssetData {
		int refCount = 0;
		GUID guid;

		void IncreaseRefCount();
		void DecreaseRefCount();
	};
}