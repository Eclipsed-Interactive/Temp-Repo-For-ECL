include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(Renderer)
GenerateCoreApiFile(RENDERER_API)

CreateSharedProject()

target_link_libraries(Renderer PUBLIC 
    CoreModule 
    OpenGL
    stb_image
)

SetFolder("Engine/Modules")