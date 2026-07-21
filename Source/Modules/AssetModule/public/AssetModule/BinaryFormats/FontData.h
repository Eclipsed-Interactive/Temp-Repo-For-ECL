#pragma once

#include "AssetData.h"

#include "CoreModule/FontData.h"

namespace Eclipse::Assets
{
	struct FontData : public AssetData {
		InternalFont font;

		//void LoadNewFontSize();
	};
}
