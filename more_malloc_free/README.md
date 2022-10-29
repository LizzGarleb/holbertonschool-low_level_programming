# More Malloc & Free
## Q & A
  1. How to use the exit function?
  
  The exit function is used to break out of a loop. This function causes an inmediate termination of the entire program done by the operation system. 
  
  The number 98 can be different as long as you know what it means if it get return.
![exit syntax](https://user-images.githubusercontent.com/96942307/198847217-95810675-1ef9-4135-ab31-5970e30140ff.png)

  2. What are the functions calloc and realloc from the standard library and how to use them?
  
   Calloc = allocates the requested memory and return a pointer to it. The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocates memory to zero.
    
![calloc syntax](https://user-images.githubusercontent.com/96942307/198847534-ad281c9c-5f79-4752-9e21-c88f30b13c2e.png)
    
   Realloc = attempts to resize the memory block pointed to by ptr that was previously allocated with a call to malloc or calloc.
    
![carbon(3)](https://user-images.githubusercontent.com/96942307/198847902-7a156484-60e7-414d-be99-1007d1485514.png)

| File               | Description                                                        |
|--------------------|--------------------------------------------------------------------|
| 0-malloc_checked.c | Write a function that allocates memory using malloc.               |
| 1-string_nconcat.c | Write a function that concatenates two strings.                    |
| 2-calloc.c         | Write a function that allocates memory for an array, using malloc. |
| 3-array_range.c    | Write a function that creates an array of integers.                |

Lizbeth Garci Lebron (Creator)

Proyect from October 26, 2022 - October 28, 2022
