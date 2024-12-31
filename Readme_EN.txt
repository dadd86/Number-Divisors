Number Divisors Project
This project is designed to find three divisors of a given number that, when multiplied together, equal the original number.
If a combination of divisors is found, the program displays it. Otherwise, it indicates that no valid divisors were found.
The program allows users to input multiple numbers and get the divisor results until they decide to exit.

Project Description
This C program allows users to input a number, and then searches for three divisors of that number that, when multiplied together, result in the original number.
If it finds these divisors, it displays them; otherwise, it indicates that no valid combination was found.
The process repeats for every number the user inputs until they enter 0, at which point the program ends.

Functionalities:
Number Input: Allows the user to input a number or 0 to terminate the program.
Divisor Search: For each input number, the program searches for three distinct divisors that, when multiplied together, equal the input number.
Results: If divisors are found, they are displayed to the user; otherwise, the program indicates that no valid divisors were found.
Continuous Loop: The program allows continuous number input, processing each number until the user decides to exit.

Key Functions:
EscrituraNumero(): A function that prompts the user to input a number or 0 to exit. The input is stored in the provided variable.
Divisores(): A function that calculates three divisors of the input number such that their product equals the original number. 
	If no valid combination is found, it indicates that no divisors were found.
Escritura(): A function that prints the divisor search results. If valid divisors are found, it displays them. Otherwise, it prints a message indicating no divisors were found.

Algorithm Explanation:
Number Input: The program first prompts the user to input a number. If the number is 0, the program terminates.
Divisor Search:
	The Divisores() function searches for three divisors d1, d2, and d3 of the input number such that their product equals the number.
	The search starts with d1 ranging from 2 to half the input number. For each d1, the program searches for d2 ranging from d1 tonum/d1. 
	For each pair of divisors d1 and d2, d3 is calculated as num/(d1×d2).

Verification:
	If d1×d2×d3 equals the input number, the divisors are stored, and valid divisors are displayed.
	If no valid combination is found, the program prints a message stating no divisors were found.
Repetition: The process repeats until the user inputs 0 to terminate.

Requirements:
Compiler: A C compiler compatible with the C99 standard or higher.
Operating System: Compatible with Windows, Linux, and macOS.

Usage Instructions:
Compilation and Execution:
To compile the project, use a C compiler (e.g., GCC) with the following command:
	gcc -o divisors divisors.c
To run the program, use the following command:
	./divisors

Interaction:
The program prompts the user to input a number.
It then displays the divisors of that number if they exist.
The process repeats for each input number until the user enters 0 to exit.

Example Usage:
Input: The user enters the number 36.

The program searches for three divisors of 36 that, when multiplied, equal 36. For example, 
2×3×6=36.
Output:
Number: 36  
Divisor 1: 2  
Divisor 2: 3  
Divisor 3: 6  
Input: The user enters the number 30.

The program does not find three divisors that, when multiplied, equal 30.
Output:

No valid divisors found for the number: 30  
Input: The user enters 0.

The program terminates.

Contributions:
Contributions to the project are welcome. If you wish to improve the code, add new features, or fix bugs, please follow these steps:

Fork the repository.
Create a new branch for your changes:
	git checkout -b feature/new-feature
Make your changes and commit them:
	git commit -am 'Add new feature'
Push to the branch:
	git push origin feature/new-feature
Create a pull request describing the changes made.