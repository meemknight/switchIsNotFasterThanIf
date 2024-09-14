For modern C++ compilers, if is as fast as a switch because it is optimized the same. After many tests, it seems like the only case where switch can be faster, is if has some other things like < or ||, and that confuses the compiler when making the jump table. So basically that part (that can't be written as a switch statement in the first place) won't be optimized as a jump table.
A simple if with many || operators however, will be optimized perfectly. Also, the compiler managed to make a jump table every time, so you will never have a big difference. If and switch generate the SAME assembly if the if doesn't have things like < > operators. And for some reasons, if you have more than 128 ifs on clang, you will get 2 jump tables instead of one. So that is the only real difference I guess.
You can test the code here:

https://quick-bench.com/

From the LLVM source code:
https://llvm.org/doxygen/LoopUnrollRuntime_8cpp_source.html
Line 552
Note - LLVM converts the if-then-sequence to a switch
 instruction in SimplifyCFG.cpp.  Then, the backend decides how code for
 the switch instruction is generated.
