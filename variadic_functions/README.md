# Variadic Functions

##  Q & A
1. What are variadic functions?

Are functions that can take variables number of arguments.

2. How to use va_start, va_arg and va_end macros?

The va_arg() macros are used to pass a variable number of arguments to a function.

    First, you must have a call to va_start() passing a valid va_list and the name of the last argument variable before the ellipsis ("..."). This first argument can be anything; one way to use it is to have it be an integer describing the number of parameters being passed.
    Next, you call va_arg() passing the va_list and the type of the argument to be returned. The return value of va_arg() is the current parameter.
    Repeat calls to va_arg() for however many arguments you have.
    Finally, a call to va_end() passing the va_list is necessary for proper cleanup.
    
3. Why and how to use the const type qualifier?
We use the const qualifier to declare a variable as constant. That means the we cannot changed the value once the variable has been initialized.

| File              | Description                                                   |
|-------------------|---------------------------------------------------------------|
| 0-sum_them_all.c  | Write a function that returns the sum of all its parameters.  |
| 1-print_numbers.c | Write a function that prints numbers, followed by a new line. |
| 2-print_strings.c | Write a function that prints strings, followed by a new line. |
| 3-print_all.c     | Write a function that prints anything.                        |

Lizbeth Garcia Lebron (Creator)

Proyect from November 2, 2022 - November 5, 2022
