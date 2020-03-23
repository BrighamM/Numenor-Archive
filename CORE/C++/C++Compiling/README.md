# C++ Compile

## https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html

```Bash
$ g++ -o hello hello.cpp
// Compile and link source hello.cpp into executable hello.exe
$ chmod a+x hello
$ ./hello
```

```Bash
$ g++ -Wall -g -o Hello.exe Hello.cpp
```

* -o: specifies the output executable filename.
* -Wall: prints "all" Warning messages.
* -g: generates additional symbolic debuggging information for use with gdb debugger.

```Bash
// Compile-only with -c option
> g++ -c -Wall -g Hello.cpp
// Link object file(s) into an executable
> g++ -g -o Hello.exe Hello.o
```

* -c: Compile into object file "Hello.o". By default, the object file has the same name as the source file with extension of ".o" (there is no need to specify -o option). No linking with other object files or libraries.
* Linking is performed when the input file are object files ".o" (instead of source file ".cpp" or ".c"). GCC uses a separate linker program (called ld.exe) to perform the linking.

Suppose that your program has two source files: file1.cpp, file2.cpp. You could compile all of them in a single command:

```Bash
 g++ -o myprog.exe file1.cpp file2.cpp
```

However, we usually compile each of the source files separately into object file, and link them together in the later stage. In this case, changes in one file does not require re-compilation of the other files.

```Bash
 g++ -c file1.cpp
 g++ -c file2.cpp
 g++ -o myprog.exe file1.o file2.o
```


```Bash
$ g++ -std=c++17 -g -O3 -Wall -Wextra -Werror -o smartPoint SmartPointers.cpp
```
