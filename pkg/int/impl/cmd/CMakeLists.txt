project(cmd
        VERSION 1.0.0
        DESCRIPTION "Parse command line arguments.")

set(HEADER_LIST "${mvbuild_SOURCE_DIR}/pkg/int/inc/cmd/parse.h")

# Make an automatic library - will be static or dynamic based on user setting
add_library(cmd parse.cpp ${HEADER_LIST})

# Add precompiled headers
target_precompile_headers(cmd PRIVATE pch.h)

# We need this directory, and users of our library will need it too
target_include_directories(cmd PUBLIC "${mvbuild_SOURCE_DIR}/pkg/int/inc")

# This depends on (header only) boost
target_link_libraries(cmd PRIVATE Boost::boost Boost::program_options)

# All users of this library will need at least C++17
target_compile_features(cmd PUBLIC cxx_std_17)

add_library(cmd::parse ALIAS cmd)


