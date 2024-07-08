# Deploy on MacOS

In this part we will look at how to download
dependencies, configure and build a CMake project on MacOS.

---

## Requirements

#### Supported compilers

| Compiler | Version |
|:--------:|:-------:|
|  WinGW   |    x    |

#### Tools

|       Tool       | Version |
|:----------------:|:-------:|
|      CMake       | \>=3.21 |
|      vcpkg       | latest  |

#### Libraries

| Requirement | Version |
|:-----------:|:-------:|
|     Qt      |  6.7.2  |

## Configuring CMake

Before configuring the CMake project
To download dependencies you need
download all [tools](#tools).

For project configuration use
next command:

```shell
cmake . -B path/to/build -DCMAKE_TOOLCHAIN_FILE=path/to/vcpkg/scripts/buildsystems/vcpkg.cmake
```

## Build

For build project use:

```shell
cmake --build path/to/build --config {Release|Debug}
```

> [!IMPORTANT]
> If you have problems with qt platforms
> copy platforms folder nearby _.exe_
> file

<header align="center" style="font-size: 50px;">Well Done!</header>