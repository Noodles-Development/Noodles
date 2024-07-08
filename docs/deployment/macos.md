# Deploy on MacOS

In this part we will look at how to download dependencies, configure and build a CMake project on MacOS.

---

## Requirements

#### Supported compilers

|     Compiler      |  Version  |
|:-----------------:|:---------:|
| Apple Clang (GCC) | \>=15.0.0 |

#### Tools

|       Tool       | Version |
|:----------------:|:-------:|
|      CMake       | \>=3.21 |
|      vcpkg       | latest  |
|     autoconf     |    x    |
|     automake     |    x    |
| autoconf-archive |    x    |

#### Libraries

| Requirement | Version |
|:-----------:|:-------:|
|     Qt      |  6.7.2  |

## Configuring CMake

Before configuring the CMake project
To download dependencies you need
download all [tools](#tools).

To install tools use:

```shell
brew install autoconf automake autoconf-archive cmake vcpkg
```

For project configuration use
next command:

```shell
cmake . -B path/to/build -DCMAKE_TOOLCHAIN_FILE=path/to/vcpkg/scripts/buildsystems/vcpkg.cmake
```

> [!IMPORTANT]
> If you have problems with Qt6::syncqt
> copy `vcpkg/buildtrees/qtbase/x64-osx-dbg/bin/syncqt`
> to `build/vcpkg_installed/x64-osx/bin/syncqt`
> and reconfigure the project

## Build

For build project use:

```shell
cmake --build path/to/build --config {Release|Debug}
```

<header align="center" style="font-size: 50px;">Well Done!</header>