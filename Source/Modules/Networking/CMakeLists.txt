include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(Networking)
GenerateCoreApiFile(NETWORKING_API)

CreateSharedProject()

target_link_libraries(Networking PUBLIC 
    CoreModule 
    steamsdk
)

SetFolder("Engine/Modules")