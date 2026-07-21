#pragma once

#include "AssetModule/Assets/Asset.h"

#include "AssetModule/BinaryFormats/PrefabData.h"


namespace Eclipse::Assets
{
	struct Prefab : public Asset<PrefabData> {
		ASSET_IMPL(Prefab, PrefabData)

	public:
	};
}