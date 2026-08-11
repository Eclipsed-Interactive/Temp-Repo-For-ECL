#include "AudioPlugin.h"

#include "fmod/fmod.h"
#include "fmod/fmod.hpp"
#include "fmod/fmod_studio.h"
#include "fmod/fmod_studio.hpp"
#include "fmod/fmod_errors.h"

#include <iostream>

using namespace FMOD;

namespace Eclipse::Audio
{
	bool AudioPlugin::Initialize(Eclipse::Core::EngineContext& ctx)
	{
		FMOD_RESULT result;

		result = Studio::System::create(&studioSystem);
		if (!CheckResult(result)) {
			PrintLastError(result); return;
		};


		result = studioSystem->getCoreSystem(&system);
		if (!CheckResult(result)) {
			PrintLastError(result); return;
		};


		result = system->setDSPBufferSize(1024, 4);
		if (!CheckResult(result)) {
			PrintLastError(result); return;
		};

		result = system->set3DSettings(1.0f, 2.0f, 0.5f);
		if (!CheckResult(result)) {
			PrintLastError(result); return;
		};


		result = studioSystem->initialize(
			512,
			FMOD_STUDIO_INIT_NORMAL,
			FMOD_INIT_NORMAL,
			nullptr
		);
		if (!CheckResult(result)) {
			PrintLastError(result); return;
		};

		ctx.services.Register<FMOD::System>(system);
		ctx.services.Register<FMOD::Studio::System>(studioSystem);
	}

	void AudioPlugin::Shutdown()
	{
		if (studioSystem)
		{
			studioSystem->release();
			studioSystem = nullptr;
			system = nullptr;
		}
	}

	void AudioPlugin::Update(float deltaTime)
	{
		if (!studioSystem)
			return;

		FMOD_RESULT result = studioSystem->update();

		if (!CheckResult(result))
		{
			PrintLastError(result);
		}
	}

	void AudioPlugin::PrintLastError(int result)
	{
		std::cout << "FMOD: " << GetResultString(result) << std::endl;
	}

	bool AudioPlugin::CheckResult(int result)
	{
		const FMOD_RESULT fmodResult = (FMOD_RESULT)result;
		if (fmodResult == FMOD_OK)
			return true;
		return false;
	}

	const char* AudioPlugin::GetResultString(int result)
	{
		return FMOD_ErrorString(static_cast<FMOD_RESULT>(result));
	}
}

extern "C"
{
	AUDIO_API Eclipse::Core::IPlugin* CreatePlugin()
	{
		Eclipse::Audio::AudioPlugin* ptr = new Eclipse::Audio::AudioPlugin;
		return (Eclipse::Core::IPlugin*)ptr;
	}

	AUDIO_API void DestroyPlugin(Eclipse::Core::IPlugin* plugin)
	{
		plugin->Shutdown();
		delete plugin;
	}
}