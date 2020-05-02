add_executable(mvbuild src/main.cpp)

# Add precompiled headers
target_precompile_headers(mvbuild PRIVATE src/pch.h)

target_compile_features(mvbuild PRIVATE cxx_std_17)

target_link_libraries(mvbuild PRIVATE
        cmd::cmd
        wnd::wnd
        cp::cp)


