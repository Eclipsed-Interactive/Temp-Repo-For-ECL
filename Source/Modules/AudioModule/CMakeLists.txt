include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(AudioModule)
GenerateCoreApiFile(AUDIO_API)

CreateSharedProject()

target_link_libraries(AudioModule
    PUBLIC
        fmod
        CoreModule
)

SetFolder("Engine/Modules")