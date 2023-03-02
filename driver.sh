#!/bin/bash

if [[ $1  == "-input" && $3 == "" ]];then
	cat $2 | ./a.out>>"ast.dot" 1>/dev/null
	# echo "hi"
elif [[ $1 == "-input" && $3 == "-out" ]];then 1>/dev/null
	cat $2 | ./a.out>> $4
elif [[ $1 == "-help" ]];then
	echo "It generates the Abstract Syntax Tree (in DOT format) for the given input Java program"
elif [[ $1 == "-verbose" ]];then
	echo "To run the binary, use -input flag to give the input file"
	echo "Use -out to give the output file. If not given, the output would be produced at ast.dot"
	echo "Use -help for help"
	echo "The final execution procedure should be ./driver -input in.java [-out output]"

fi