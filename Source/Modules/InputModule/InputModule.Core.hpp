#pragma once

#ifdef InputModule_EXPORTS
#define INPUT_API __declspec(dllexport)
#elif InputModule_IMPORTS
#define INPUT_API __declspec(dllimport)
#endif