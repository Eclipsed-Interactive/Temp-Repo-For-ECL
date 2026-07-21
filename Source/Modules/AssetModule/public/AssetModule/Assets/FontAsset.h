#pragma once

#include "AssetModule/Assets/Asset.h"
 
#include "AssetModule/BinaryFormats/FontData.h"

namespace Eclipse::Assets
{
	struct Font : public Asset<FontData> {
		ASSET_IMPL(Font, FontData)

	public:
	};
}