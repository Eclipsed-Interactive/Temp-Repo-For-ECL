#pragma once

#include <unordered_map>
#include <string>

#include "Plugin.h"

namespace Eclipse::Core
{
	class PluginManager final
	{
	public:
		static void CompileAndLoadPlugin(const char* pluginPath, const char* pluginSource);
		static void ReloadPlugin(const char* pluginPath);
		static void LoadPlugin(const char* pluginPath);
		static void CompileAndReloadPlugin(const char* pluginPath, const char* pluginSource);

	private:
		static bool CompilePlugin(const char* pluginSource);

	private:
		static std::unordered_map<std::string, Plugin> loadedPlugins;
	};
}