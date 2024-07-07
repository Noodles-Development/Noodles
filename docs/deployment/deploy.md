# Documentation

In this part we will look at how to download
dependencies, configure and build a CMake project.

## Requirements

| Library | Version |
|---------|---------|
| qtbase  | 6.7.2   |

## Configuring CMake
Before configuring the CMake project
To download dependencies you need
download package manager vcpkg.

For project configuration use
next command.

```shell
cmake . -B path/to/build -DCMAKE_TOOLCHAIN_FILE=path/to/vcpkg/scripts/buildsystems/vcpkg.cmake
```

## Build

For build project use:

```shell
cmake --build path/to/build --config {Release|Debug}
```