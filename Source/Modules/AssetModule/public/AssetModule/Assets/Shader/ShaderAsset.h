#pragma once

#include "AssetModule/Assets/Asset.h"

#include "AssetModule/BinaryFormats/ShaderData.h"

namespace Eclipse::Assets
{
	struct Shader : public Asset<ShaderData> {
		// methods regarding the asset.
	};
}