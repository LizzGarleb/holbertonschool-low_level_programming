# Malloc & Free
## Q & A
  1. What is the difference between automatic and dynamic allocation?
  
      Automatic Allocation = When the allocation of memory performs at the compile time, then it is known as static memory. In this, the memory is allocated for variables by the compiler.
  
      Dynamic Allocation = When the memory allocation is done at the execution or run time, then it is called dynamic memory allocation. 
  
![Difference between automatic   dynamic memory allocation](https://user-images.githubusercontent.com/96942307/198846276-2be06ccf-4d00-4335-b14f-ea4277d43ddb.png)

  2. What is malloc and free and how to use them?

      Malloc = seperates memory and returns a pointer to it.
      
![malloc syntax](https://user-images.githubusercontent.com/96942307/198844644-11c33fc3-9b43-4bf7-8338-a3100ac1a0bd.png)
   
   As we can see in this image we creted a pointer and initialized it using malloc, we are telling malloc that we need 5 spaces that are sizeof int (4 bytes). In return malloc is gonna seperate 20 bytes of memory and it gonna retrn the addres of that memory with our pointer named ptr.
      
   Free = deallocates the memory previously allocated by a call to malloc.
      
   ![carbon(1)](https://user-images.githubusercontent.com/96942307/198845877-31f9478f-cdf3-42fd-bc9d-9d4ce0c0083a.png)

  3. Why and when use malloc?
      Malloc is used to seperate memory when you dont know how many is going to arrived.
  
  4. How to use valgrind to check for memory leak?

      In order to use valgrind you will need a executable file. Once you have the executable you will type "valgrind ./executableFile If the there are no memory leak you report would look like this:
  ![valgrind testing](https://user-images.githubusercontent.com/96942307/198844350-7f40139a-614f-42a7-88f6-55e0a0b6e493.png)

| File             | Description                                                                                                                             |
|------------------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 0-create_array.c | Write a function that creates an array of chars, and initializes it with a specific char.                                               |
| 1-strdup.c       | Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. |
| 2-str_concat.c   | Write a function that concatenates two strings.                                                                                         |
| 3-alloc_grid.c   | Write a function that returns a pointer to a 2 dimensional array of integers.                                                           |
| 4-free_grid.c    | Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.                                        |

Lizbeth Garcia Lebron (Creator)

Proyect from October 24, 2022 - October 25, 2022
