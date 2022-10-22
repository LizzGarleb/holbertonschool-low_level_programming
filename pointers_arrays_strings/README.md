# Pointers, Arrays & Strings

## Q & A
1. What are pointers and how to use them? - A pointer is a variable that stores the memory address of another variabla as it value.

2. What are arrays and how to use them? - Arrays are used to store multiple values in a single variable, instead of declaring separate bvariables for each value.

3. What are the differences between pointers and arrays? - The main difference between array and pointers is the fixed size of the memory block. When array are created the fixed size of the memory block is allocated. But with Pointers the memory is dynamically allocated.

4. How to use strings and how to manipulate them? - a string is a sequence of characters terminated with a null byte. We can manipulate a string using functions from the library string.h.

5. Scope of variables - is the lifetime of a variable in the program.

6. What are pointers to pointers and how to use them? - A pointer to a pointer is a form of multiple indirections, or a chain of pointers. Normally a pointer contains the address of a variable. When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which point to the location that contains the actial value.

![Example of a pointer to pointer](https://www.tutorialspoint.com/cprogramming/images/pointer_to_pointer.jpg)


7. What are multidimensional arrays and how to use them? - The simplest form of multidimensiona array is the two-dimensional array. A two-dimensional array is, in essence, a list of one-dimensional array. 

![Example of multidimensiona arrays](https://user-images.githubusercontent.com/96942307/196568499-3ca82bf7-d56a-4890-b4d6-1876c3267f33.jpg)

8. What are the most common C standard library functions to manipulate strins? - The most common function for string manipulation are: 

     strlen(): Calculate the lenght of a string
  
     strcpy(): Copies a string to another string
  
     strcat(): Concatenate two 
  
     strlwr(): Convert string to lowercase
  
  This are some of the few, there are more common functions.

### PROYECT 1 (Pointers, arrays and strings)

| File            | Description                                                                                                                            |
|-----------------|----------------------------------------------------------------------------------------------------------------------------------------|
| 0-reset_to_98.c | Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.                                 |
| 1-swap.c        | Write a function that swaps the values of two integers.                                                                                |
| 2-strlen.c      | Write a function that returns the length of a string.                                                                                  |
| 3-puts.c        | Write a function that prints a string, followed by a new line, to stdout.                                                              |
| 4-print_rev.c   | Write a function that prints a string, in reverse, followed by a new line.                                                             |
| 5-rev_string.c  | Write a function that reverses a string.                                                                                               |
| 6-puts2.c       | Write a function that prints every other character of a string, starting with the first character, followed by a new line.             |
| 7-puts_half.c   | Write a function that prints half of a string, followed by a new line.                                                                 |
| 8-print_array.c | Write a function that prints n elements of an array of integers, followed by a new line.                                               |
| 9-strcpy.c      | Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. |

### PROYECT 2 (More pointers, arrays and strings)

| File               | Description                                                                   |
|--------------------|-------------------------------------------------------------------------------|
| 0-strcat.c         | Write a function that concatenates two strings.                               |
| 1-strncat.c        | Write a function that concatenates two strings.                               |
| 2-strncpy.c        | Write a function that copies a string.                                        |
| 3-strcmp.c         | Write a function that compares two strings.                                   |
| 4-rev_array.c      | Write a function that reverses the content of an array of integers.           |
| 5-string_toupper.c | Write a function that changes all lowercase letters of a string to uppercase. |
| 6-cap_string.c     | Write a function that capitalizes all words of a string.                      |
| 7-leet.c           | Write a function that encodes a string into 1337.                             |

### PROYECT 3 (Even more pointers, arrays and strings)

| File                 | Description                                                                               |
|----------------------|-------------------------------------------------------------------------------------------|
| 0-memset.c           | Write a function that fills memory with a constant byte.                                  |
| 1-memcpy.c           | Write a function that copies memory area.                                                 |
| 2-strchr.c           | Write a function that locates a character in a string.                                    |
| 3-strspn.c           | Write a function that gets the length of a prefix substring.                              |
| 4-rev_array.c        | Write a function that searches a string for any of a set of bytes.                        |
| 4-strpbrk.c          | Write a function that changes all lowercase letters of a string to uppercase.             |
| 5-strstr.c           | Write a function that locates a substring.                                                |
| 7-print_chessboard.c | Write a function that prints the chessboard.                                              |
| 8-print_diagsums.c   | Write a function that prints the sum of the two diagonals of a square matrix of integers. |

Proyect 1 & Proyect 2 from October 10, 2022. - October 12, 2022

Proyect 3 from October 13, 2022 - October 14, 2022

Lizbeth Garcia Lebron (Creator)
