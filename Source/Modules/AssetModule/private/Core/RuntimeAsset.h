#pragma once

#include <variant>

#include "AssetModule/Assets/TextureAsset.h"
#include "AssetModule/Assets/PrefabAsset.h"
#include "AssetModule/Assets/MaterialAsset.h"
#include "AssetModule/Assets/FontAsset.h"
#include "AssetModule/Assets/AudioAsset.h"
#include "AssetModule/Assets/Shader/VertexShaderAsset.h"
#include "AssetModule/Assets/Shader/PixelShaderAsset.h"
#include "AssetModule/Assets/SceneAsset.h"

namespace Eclipse::Assets
{
    using RuntimeAssetDataVariant = std::variant<
        AudioData*,
        FontData*,
        MaterialData*,
        TextureData*,
        PrefabData*,
        ShaderData*,
        SceneData*
    >;
};