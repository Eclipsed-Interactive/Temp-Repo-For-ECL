#pragma once

#include <filesystem>

#include "CoreModule/MainSingleton.h"

#include <fstream>
#include "CoreModule/Files/FileWatcher.h"

#include "AssetModule/AssetTypes.h"

#include "AssetModule.Core.hpp"

namespace Eclipse::Assets
{
	struct AssetMeta;
	struct GUID;

	class ASSET_API AssetManager
	{
	public:
		static void CookAndPackageAssets();

		static void EndFrame();

		static bool IsFileReady(const std::string& path);

		template<typename T>
		static T Load(const GUID& guid);

		template<typename T>
		static T LoadDefault(DefaultAssetType assetType);

		static void AddFileChanged(const Editor::FileWatcherEvent& e);
		static void ProcessFileChanges();

	private:
		static bool FileWasChanged(const AssetMeta& meta);

		static inline std::vector<Editor::FileWatcherEvent> fileChanges;
		static inline std::mutex fileChangesMutex;

	};


}