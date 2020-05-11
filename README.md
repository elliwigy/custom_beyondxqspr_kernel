Sprint Samsung Galaxy S10 5G Android Q Custom Kernel

Features (feature will be added and listed here as they are made.)
- Removed avb flags from DTS
- Removed verify flags from DTS
+ Updated defconfig
    - Unset proca, defex, dm verity
    - Set Localversion to -elliwigy
+ Added prebuilt aarch64-linux-android, clang and llvm toolchains
    - Toolchain was build using Snapdragon LLVM Compiler which was obtained from Qualcomm Developer site (must create an account using work/business
      email address to gain access to download the compiler/tools.)
+ Edited build_kernel.sh Script to use the toolchains added.

Directions:
~ These instructions assume you have your build environment already set up to build. Steps to set up build environment is not provided here.
~ Clone or Download this source code.
~ In terminal, cd to the root directory for the kernel and run: ./build_kernel.sh
~ Once completed kernel will be in the out directory.
