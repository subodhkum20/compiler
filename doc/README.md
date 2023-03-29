# MILESTONE 2


## Command to run the Parser : -

./driver.sh -input ../tests/test_7.java

Above driver script contains the command to run lexer, parser.

## Important files in src

It has a src directory containing all the implementation files.
    i)  3ac.cpp for three address code.
    ii) typecheck.cpp for all function related to type error and type checking.
    iii) symTable.cpp which contains all the symbol table related functionalities. 
It has a test directory which contains all the test cases. 
It also has a doc directory which contains this readme file.

## main functionalities of the MILESTONE 2

The compiler dumps the symbol table of each function and class defined. 
We also dump the Global Symbol Table in a file "#---------.csv". 
If there is any error in the program, compiler gives an appropriate error and stops compilation.