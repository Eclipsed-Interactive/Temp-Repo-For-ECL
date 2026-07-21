#pragma once

#ifdef CoreModule_EXPORTS
#define CORE_API __declspec(dllexport)
#elif CoreModule_IMPORTS
#define CORE_API __declspec(dllimport)
#endif