add_executable(MVBuild src/main.cpp)

target_compile_features(MVBuild PRIVATE cxx_std_17)

target_link_libraries(MVBuild PRIVATE cmd::parse fmt::fmt)

# Add precompiled headers
# Reuse foobar's precompile headers
# Must not be an alias
target_precompile_headers(MVBuild REUSE_FROM cmd)

