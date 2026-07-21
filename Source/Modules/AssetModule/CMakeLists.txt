include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(AssetModule)
GenerateCoreApiFile(ASSET_API)

CreateSharedProject()

target_link_libraries(AssetModule PUBLIC 
    CoreModule 
    OpenGL
    fmod
    FreeType
    stb_image
)

SetFolder("Engine/Modules")