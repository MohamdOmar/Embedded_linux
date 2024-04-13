#!/bin/bash

# echo "hello world"
# name="Mohamed"
# echo "hello ${name} Omar "
# printf "hello world %s \n" $name

# #to print a words befor taking the input:-p for secret input: -s like sudo password
# read -sp "Enter value: " value 
# echo "the value is $value"


# #to save output of a command
# output=$(ls)
# output=`ls` 

# echo "$output"

# output="MohamedOmar"
# #dont forget to the "" in "${output}" speicialy when using if
# echo "${output}"

# # to commint multi lines but not preferd
# <<Comit #he wants command to redirect Comit as input that is why this is not perferd
# Commints here
# Comit


# # if or test 
# #use "man test" or "man [" to see how to do compersion 
# #Sample of the man output
# # STRING1 = STRING2
# #               the strings are equal

# #        STRING1 != STRING2
# #               the strings are not equal

# #        INTEGER1 -eq INTEGER2
# #               INTEGER1 is equal to INTEGER2

# #        INTEGER1 -ge INTEGER2
# #               INTEGER1 is greater than or equal to INTEGER2

# #        INTEGER1 -gt INTEGER2
# #               INTEGER1 is greater than INTEGER2


# value=0
# if [ $value -gt 1 ]; then
#     echo "the value is valid"
# elif [ $value -gt 2 ]; then
#     echo "the value is valid2"
# else
#     echo "the value is Invalid"
# fi

# #Check file exist or not
# if [ -f a.out ]; then
#     echo "file is exist"
# fi


# for loop
for i in 1 7 10 4 6 8; do
    echo $i
done

# reguler expresion
for i in {1..10}; do
    echo "the Number is ${i}"
done

learn="Start learing from Javatpoint"
for i in $learn; do
    echo