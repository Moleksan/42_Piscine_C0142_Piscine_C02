# 42_Piscine_C02

C Piscine C 02 – Exercises
This repository contains my solutions to the C Piscine C 02 module from 42 School. These exercises primarily focus on string manipulation and cover topics such as copying strings, checking string content, and transforming characters in various ways. Below is an overview of the tasks I have completed, with a brief description of each exercise and what concepts were learned.

Exercises Completed:  
  
- Exercise 00: ft_strcpy  
Objective: Create a function ft_strcpy that copies a string from src to dest.
  
Prototype:
  
       char *ft_strcpy(char *dest, char *src);  

Key Learnings:  

    Understanding how to manipulate and copy strings in C using pointers.

- Exercise 01: ft_strncpy
Objective: Implement ft_strncpy, which copies up to n characters from src to dest.  
  
 Prototype:

        char *ft_strncpy(char *dest, char *src, unsigned int n);

Key Learnings:
 
    Handling edge cases where strings are shorter than n and learning to pad with null bytes.

- Exercise 02: ft_str_is_alpha
Objective: Create a function ft_str_is_alpha that checks if a string contains only alphabetical characters.  

Prototype: 
  
       int ft_str_is_alpha(char *str);

Key Learnings:  
      Checking each character of a string using ASCII values to determine if they are letters.

- Exercise 03: ft_str_is_numeric
Objective: Implement a function ft_str_is_numeric to check if a string contains only numeric characters.

Prototype: 

        int ft_str_is_numeric(char *str);

Key Learnings:

            Working with character sets to check for numeric digits.

- Exercise 04: ft_str_is_lowercase
Objective: Write a function ft_str_is_lowercase to verify if a string contains only lowercase letters.

Prototype: 

         int ft_str_is_lowercase(char *str);

Key Learnings:
  
    Understanding and checking the range of lowercase ASCII characters.

- Exercise 05: ft_str_is_uppercase
Objective: Implement ft_str_is_uppercase to check if a string contains only uppercase letters. 

Prototype: 

    int ft_str_is_uppercase(char *str);

Key Learnings:

    Learning to verify the range of uppercase characters in ASCII.

- Exercise 06: ft_str_is_printable
Objective: Create ft_str_is_printable to determine if a string contains only printable characters. 

Prototype: 
   
       int ft_str_is_printable(char *str);

Key Learnings:
Checking for characters in the printable ASCII range (from space to tilde).  

- Exercise 07: ft_strupcase
Objective: Write ft_strupcase, a function that transforms all lowercase letters of a string to uppercase.  

Prototype: 

        char *ft_strupcase(char *str);

Key Learnings:
Manipulating strings by converting characters from lowercase to uppercase.

- Exercise 08: ft_strlowcase
Objective: Implement ft_strlowcase to convert all uppercase letters in a string to lowercase. 

Prototype: 

        char *ft_strlowcase(char *str);

Key Learnings:

        Understanding case conversion in ASCII.  

- Exercise 09: ft_strcapitalize
Objective: Create ft_strcapitalize, a function that capitalizes the first letter of each word and lowers all others.  

Prototype: 

        char *ft_strcapitalize(char *str);

Key Learnings:

Handling word boundaries in strings and applying mixed case transformations.
         
How to Run:  

- Clone this repository:

        git clone https://github.com/YOUR_USERNAME/c_piscine_c02.git

- Navigate to the exercise directory and compile the C file. For example, for Exercise 00:  

        cd ex00
        gcc -Wall -Wextra -Werror ft_strcpy.c -o ft_strcpy
        ./ft_strcpy


Conclusion:
This project helped me further develop my understanding of string manipulation, memory handling, and basic algorithms in C. Through these exercises, I practiced working with arrays of characters (strings), developed skills in case conversion and string operations, and gained insights into memory representation in C.  
