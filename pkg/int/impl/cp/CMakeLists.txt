project(cp
        VERSION 1.0.0
        DESCRIPTION "Perform basic copy operations.")

# Library files
set(SRC_LIST "file.cpp")
set(HDR_LIST "${mvbuild_SOURCE_DIR}/pkg/int/inc/cp/file.h")

# Make an automatic library - will be static or dynamic based on user setting
add_library(cp ${SRC_LIST} ${HDR_LIST})

# Add precompiled headers
target_precompile_headers(cp PRIVATE pch.h)

# We need this directory, and users of our library will need it too
target_include_directories(cp PUBLIC "${mvbuild_SOURCE_DIR}/pkg/int/inc")

# All users of this library will need at least C++17
target_compile_features(cp PUBLIC cxx_std_17)

add_library(cp::cp ALIAS cp)


