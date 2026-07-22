#pragma once

#include "Config.h"
#include "Presets/BuildPresets.h"
#include "CoreModule/PathManager.h"
#include <unordered_map>
#include <filesystem>

#include "CoreModule.Core.hpp"

namespace Eclipse::Configs
{
	class CORE_API ConfigManager
	{
	public:
		static void Init();
		static Config& GetConfig(const char* name);

		static void LoadOrCreate(Config& conf, const char* configPath);

	private:
		static std::unordered_map<std::string, Config> configs;
	};
}