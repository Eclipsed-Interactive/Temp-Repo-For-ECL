#pragma once

#ifdef AssetModule_EXPORTS
#define ASSET_API __declspec(dllexport)
#elif AssetModule_IMPORTS
#define ASSET_API __declspec(dllimport)
#endif