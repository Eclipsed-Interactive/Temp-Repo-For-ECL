#pragma once

#include "Audio.Core.hpp"

namespace FMOD
{
	class System;
	namespace Studio
	{
		class System;
	}
}

namespace Eclipse::Audio
{
	class AudioPlugin : public Eclipse::Core::IPlugin
	{
	public:
		bool Initialize(Eclipse::Core::EngineContext& ctx) override;
		void Shutdown() override;

		void Update(float deltaTime) override;

	private:
		void PrintLastError(int result);
		bool CheckResult(int result);
		const char* GetResultString(int result);

	private:
		FMOD::System* system;
		FMOD::Studio::System* studioSystem;
	};
}