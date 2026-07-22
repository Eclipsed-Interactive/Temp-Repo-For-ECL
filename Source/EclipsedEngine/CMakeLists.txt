include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(EclipsedEngine)
GenerateCoreApiFile(ECL_API)

CreateSharedProject()

target_link_libraries(EclipsedEngine
    PUBLIC
        CoreModule  
        InputModule  
        AudioModule  
        AssetModule  
        ECS
        Renderer
        Physics
        Networking
)
