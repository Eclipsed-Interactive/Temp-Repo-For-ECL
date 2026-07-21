include("${CMAKE_SOURCE_DIR}/CMake/common.cmake")

SetProjectKey(CoreModule)
GenerateCoreApiFile(CORE_API)

CreateSharedProject()

target_link_libraries(CoreModule
    PUBLIC
        cereal
        rapidjson
)

SetFolder("Engine/Modules")
