#!/bin/bash
export PATH=/root/.opam/system/bin:/usr/local/arm/gcc-linaro-7.5.0-2019.12-x86_64_arm-linux-gnueabihf/bin:/usr/lib/jvm/jdk-11/bin:/bin:/usr/bin:/usr/local/sbin:/usr/local/bin:/sbin:/usr/games:/usr/local/games:/snap/bin:/opt/RISCV/riscv/bin:/opt/RISCV/riscv/bin:/opt/RISCV/riscv/bin

cd src
rm step4.risc > /dev/null 2>&1  
riscv64-unknown-elf-gcc -o step4.risc  bubble.s sort.c  ../lib/sylib.c 
if [ -f "step4.risc" ]; then
  qemu-riscv64 -L /opt/RISCV/riscv/bin ./step4.risc 
fi
#echo $? 