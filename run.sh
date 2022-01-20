#!/usr/bin/env bash

# reading the program name
echo "Compiling" $1

# stripping .cpp from program name
var=`echo $1 | awk -F. '{print $1}'`

# command to compile cpp program
g++ $1 -o $var
echo "Running" $var

# command to run program
./$var
