#Malloc & Free
## Q & A
  1. What is the difference between automatic and dynamic allocation?
  
  2. What is malloc and free and how to use them?
    Malloc = seperates memory and returns a pointer to it.
  ![malloc syntax](https://user-images.githubusercontent.com/96942307/198844644-11c33fc3-9b43-4bf7-8338-a3100ac1a0bd.png)
  As we can see in this image we creted a pointer and initialized it using malloc, we are telling malloc that we need 5 spaces that are sizeof int (4 bytes). In return malloc is gonna seperate 20 bytes of memory and it gonna retrn the addres of that memory with our pointer named ptr.
    Free = 

  
  3. Why and when use malloc?
  Malloc is used to seperate memory when you dont know how many is going to arrived.
  
  4. How to use valgrind to check for memory leak?
  In order to use valgrind you will need a executable file. Once you have the executable you will type "valgrind ./executableFile If the there are no memory leak you report would look like this:
  ![valgrind testing](https://user-images.githubusercontent.com/96942307/198844350-7f40139a-614f-42a7-88f6-55e0a0b6e493.png)
