#pragma once

#include "AssetData.h"
#include "CoreModule/Math/Vector/Vector2.h"
#include "CoreModule/Math/RectSizePos.h"

namespace Eclipse::Assets
{
	struct SceneData : public AssetData {
		~SceneData();

		std::string sourceBlob;
	};
}