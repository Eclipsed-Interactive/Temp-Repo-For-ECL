#pragma once

#include "AssetModule/Assets/Asset.h"
#include "AssetModule/BinaryFormats/SceneData.h"

namespace Eclipse::Assets
{
	struct Scene : public Asset<SceneData> {
		ASSET_IMPL(Scene, SceneData)

	public:


	};
}