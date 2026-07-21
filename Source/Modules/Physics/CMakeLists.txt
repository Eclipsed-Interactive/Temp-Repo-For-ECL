include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(Physics)
GenerateCoreApiFile(PHYSICS_API)

CreateSharedProject()

target_link_libraries(Physics PUBLIC 
    CoreModule
    box2d
)

SetFolder("Engine/Modules")