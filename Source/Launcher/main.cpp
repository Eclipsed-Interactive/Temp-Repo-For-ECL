
#include "InputModule/Input.h"
#include "AudioModule/AudioManager.h"
#include "AssetModule/AssetManager.h"
#include "ECS/ComponentManager.h"
#include "Renderer/OpenGL/OpenGLGraphicsAPI.h"
#include "Physics/PhysicsEngine.h"

#include <iostream>

int main()
{
	std::cout << "hejsan du där!" << std::endl;

	Eclipse::Core::Input::GetAny();
	Eclipse::AudioManager::GetBus(Eclipse::AudioBus::Ambient);
	Eclipse::Assets::AssetManager::EndFrame();

	Eclipse::ComponentManager::Init();

	 Eclipse::GraphicsEngine::InitSpecifiedAPI<Eclipse::OpenGLGraphicsEngine>();
	 Eclipse::OpenGLGraphicsEngine* d = static_cast<Eclipse::OpenGLGraphicsEngine*>(Eclipse::GraphicsEngine::Get());

	 b2DebugDraw w;
	 Eclipse::PhysicsEngine::Init(0, { 0,0 }, w);
}
