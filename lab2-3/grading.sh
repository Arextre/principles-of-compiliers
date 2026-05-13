#!/bin/bash
# export PATH=/root/.opam/system/bin:/usr/local/arm/gcc-linaro-7.5.0-2019.12-x86_64_arm-linux-gnueabihf/bin:/usr/lib/jvm/jdk-11/bin:/bin:/usr/bin:/usr/local/sbin:/usr/local/bin:/sbin:/usr/games:/usr/local/games:/snap/bin:/opt/RISCV/riscv/bin:/opt/RISCV/riscv/bin:/opt/RISCV/riscv/bin

cd src
if [ -f "e1.txt" ]; then 
   echo "文法定义错误，请修改SysY.g4!"
   cat err1.txt
else 
   if [ -f "e2.txt" ]; then 
      echo "编译失败，请检查SysY.g4和Main.java!"
      cat err2.txt
   else 
      cd ..
      read -p '' choice
      java -cp ./lib/antlr4-runtime-4.13.1.jar:./target Main ./testcases/case_$choice.c
   fi
fi  

