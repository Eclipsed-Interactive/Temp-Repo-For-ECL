include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(EclipsedAPI)
GenerateCoreApiFile(ECL_API)

CreateSharedProject()

target_link_libraries(EclipsedAPI
    PUBLIC
        EclipsedEngine
)
