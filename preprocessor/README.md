# Preprocessor
## Q & A
  1. What are macros and how to use them?
  
  Macros are generally used to define constant values that are being used repeatedly in program. In the following macro (MAX_SIZE) has a value of 10.
  
![macros](https://user-images.githubusercontent.com/96942307/198848177-62c001b9-54e8-47f7-ad19-defb76cf0879.png)

  2. What are the most common predefined macros?
  
  This are a few standard macro expands:
  ![macros(1)](https://user-images.githubusercontent.com/96942307/198848413-71fb86be-c60d-46b6-9da7-a0fa391db744.png)

  3. How to include guard your header files?
  
  This ensures that when you [#include "my-header-file.h"] in multiples places, you don't get duplicate declaration of functions, variables, etc. 
  ![carbon(4)](https://user-images.githubusercontent.com/96942307/198848496-9d9cbec7-8238-4e37-a836-0ed519b04799.png)

| File                    | Description                                                                                        |
|-------------------------|----------------------------------------------------------------------------------------------------|
| 0-object_like_macro.h   | Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.        |
| 1-pi.h                  | Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359. |
| 2-main.c                | Write a program that prints the name of the file it was compiled from, followed by a new line.     |
| 3-function_like_macro.h | Write a function-like macro ABS(x) that computes the absolute value of a number x.                 |
| 4-sum.h                 | Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.                |

Lizbeth Garcia Lebron (Creator)

Proyect October 26, 2022 - October 28, 2022
