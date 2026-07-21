include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(InputModule)
GenerateCoreApiFile(INPUT_API)

CreateSharedProject()

target_link_libraries(InputModule PUBLIC 
    CoreModule 
    OpenGL
)

SetFolder("Engine/Modules")