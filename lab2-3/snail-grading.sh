#!/bin/bash
export PATH=/root/.opam/system/bin:/usr/local/arm/gcc-linaro-7.5.0-2019.12-x86_64_arm-linux-gnueabihf/bin:/usr/lib/jvm/jdk-11/bin:/bin:/usr/bin:/usr/local/sbin:/usr/local/bin:/sbin:/usr/games:/usr/local/games:/snap/bin:/opt/RISCV/riscv/bin:/opt/RISCV/riscv/bin:/opt/RISCV/riscv/bin


cd src
java -jar ../lib/antlr-4.13.1-complete.jar -no-listener -no-visitor SysY.g4
javac -cp ../lib/antlr-4.13.1-complete.jar -d ../target *.java
if [ $? == 0 ]; then 
read -p '' choice
cd ..
java -cp ./lib/antlr4-runtime-4.13.1.jar:./target Main ./testcases/case_$choice.c
else 
echo "请认真阅读编译报错信息，修改Main.java或SysY.g4文件!" 
fi 

