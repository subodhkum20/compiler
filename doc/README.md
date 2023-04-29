# MILESTONE 4


## Command to run the Parser : -

./driver.sh -input ../tests/test_1.java

Above driver script contains the command to run lexer, parser.
This driver has all the basic command line verbose which we needed to handle, like input, ouput, help.

## Important files in src

It has a src directory containing all the implementation files.
    i)  3ac.cpp for three address code.
    ii) typecheck.cpp for all function related to type error and type checking.
    iii) symTable.cpp which contains all the symbol table related functionalities. 
    iv) codegen.cpp contains all the asm generating code

It has a test directory which contains all the 10 test cases. 

It also has a doc directory which contains this readme file.

## main functionalities of the MILESTONE 4

The compiler generates a output.asm file which is an assembly language code corresponding to java program

When calling a function we store the base pointer of the caller, function arguments of the callee onto the stack.