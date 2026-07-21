#pragma once

#include "AssetModule/Assets/Asset.h"

#include "AssetModule/BinaryFormats/AudioData.h"

namespace Eclipse::Assets
{
	struct AudioClip : public Asset<AudioData> {
		ASSET_IMPL(AudioClip, AudioData)

	public:
	};
}