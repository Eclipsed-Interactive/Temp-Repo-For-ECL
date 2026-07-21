#pragma once

#ifdef AudioModule_EXPORTS
#define AUDIO_API __declspec(dllexport)
#elif AudioModule_IMPORTS
#define AUDIO_API __declspec(dllimport)
#endif