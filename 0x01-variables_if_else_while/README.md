# 0x01. C - Variables, if, else, while

## Learning Objectives

- What are the arithmetic operators and how to use them 
- What are the logical operators (sometimes called boolean operators) and how to use them 
- What the the relational operators and how to use them 
- What values are considered TRUE and FALSE in C 
- What are the boolean operators and how to use them 
- How to use the if, if ... else statements 
- How to use comments 
- How to declare variables of types char, int, unsigned int 
- How to assign values to variables 
- How to print the values of variables of type char, int, unsigned int with printf 
- How to use the while loop 
- How to use variables with the while loop 
- How to print variables using printf 
- What is the ASCII character set 
- What are the purpose of the gcc flags -m32 and -m64 

## Requirements

## General 

- Allowed editors: vi, vim, emacs 
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 
- All your files should end with a new line 
- A README.md file, at the root of the folder of the project 
- There should be no errors and no warnings during compilation 
- You are not allowed to use system 
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl 

### Task 0

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 0-positive\_or\_negative.c 

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

- You can find the source code here 
- The variable n will store a different value every time you will run this program 
- You don’t have to understand what rand, srand, RAND\_MAX do. Please do not touch this code 
- The output of the program should be: 
- The number, followed by 
- if the number is greater than 0: is positive 
- if the number is 0: is zero 
- if the number is less than 0: is negative 
- followed by a new line 

### Task 1

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 1-last\_digit.c 

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

- You can find the source code here 
- The variable n will store a different value every time you run this program 
- You don’t have to understand what rand, srand, and RAND\_MAX do. Please do not touch this code 
- The output of the program should be: 
 - The string Last digit of, followed by  
 - n, followed by 
 - the string is, followed by 
  - if the last digit of n is greater than 5: the string and is greater than 5 
  - if the last digit of n is 0: the string and is 0 
  - if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0 
 - followed by a new line 

### Task 2 

**Repo**: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 2-print\_alphabet.c 

Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- All your code should be in the main function 
- You can only use putchar twice in your code 

### Task 3

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 3-print\_alphabets.c 

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- All your code should be in the main function 
- You can only use putchar three times in your code 

### Task 4

**Repo**: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 4-print\_alphabt.c 

Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except q and e 
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- All your code should be in the main function 
- You can only use putchar twice in your code 

### Task 5

**Repo**: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 5-print\_numbers.c 

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- All your code should be in the main function 

### Task 6

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 6-print\_numberz.c 

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- You are not allowed to use any variable of type char 
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- You can only use putchar twice in your code 
- All your code should be in the main function 

### Task 7

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 7-print\_tebahpla.c 

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- All your code should be in the main function 
- You can only use putchar twice in your code 

### Task 8

**Repo**: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 8-print\_base16.c 

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- All your code should be in the main function 
- You can only use putchar three times in your code 

### Task 9

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 9-print\_comb.c 

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by ,, followed by a space 
- Numbers should be printed in ascending order 
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- All your code should be in the main function 
- You can only use putchar four times maximum in your code 
- You are not allowed to use any variable of type char 

### Task 10 

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 100-print\_comb3.c 

Write a program that prints all possible different combinations of two digits.

- Numbers must be separated by ,, followed by a space 
- The two digits must be different 
- 01 and 10 are considered the same combination of the two digits 0 and 1 
- Print only the smallest combination of two digits 
- Numbers should be printed in ascending order, with two digits 
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- You can only use putchar five times maximum in your code 
- You are not allowed to use any variable of type char 
- All your code should be in the main function 

### Task 11

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- Directory: 0x01-variables\_if\_else\_while 
- File: 101-print\_comb4.c 

Write a program that prints all possible different combinations of three digits.

- Numbers must be separated by ,, followed by a space 
- The three digits must be different 
- 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2 
- Print only the smallest combination of three digits 
- Numbers should be printed in ascending order, with three digits 
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- You can only use putchar six times maximum in your code 
- You are not allowed to use any variable of type char 
- All your code should be in the main function 

### Task 12

**Repo**:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x01-variables\_if\_else\_while 
- **File**: 102-print\_comb5.c 

Write a program that prints all possible combinations of two two-digit numbers.

- The numbers should range from 0 to 99 
- The two numbers should be separated by a space 
- All numbers should be printed with two digits. 1 should be printed as 01 
- The combination of numbers must be separated by comma, followed by a space 
- The combinations of numbers should be printed in ascending order 
- 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1 
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
- You can only use putchar eight times maximum in your code 
- You are not allowed to use any variable of type char 
- All your code should be in the main function 

