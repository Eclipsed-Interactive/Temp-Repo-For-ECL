#pragma once

#include "Core/Plugin/IPlugin.h"

#ifdef Audio_EXPORTS
#define AUDIO_API __declspec(dllexport)
#elif Audio_IMPORTS
#define AUDIO_API __declspec(dllimport)
#else
#define  AUDIO_API
#endif

extern "C"
{
	AUDIO_API Eclipse::Core::IPlugin* CreatePlugin();
	AUDIO_API void DestroyPlugin(Eclipse::Core::IPlugin* plugin);
}