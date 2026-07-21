#pragma once

#ifdef Renderer_EXPORTS
#define RENDERER_API __declspec(dllexport)
#elif Renderer_IMPORTS
#define RENDERER_API __declspec(dllimport)
#endif