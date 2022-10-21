![library](https://user-images.githubusercontent.com/96942307/197085585-13e6a353-02c9-4d3b-b6e7-50fb25f75fef.jpeg)

# Static Libraries

##  Q & A

  1. What is a static library? A static library is a compiled object file containing all symbols required by the main program to operate as opposed to having to pull in separate entities.
  
  2. How does it work? Store file in object code; during the linking phase of the compilation process file in object code are accessed and used.
  
  3. How to use it? You can use a static library by invoking it as part of the compilation and linking process when creating a program executable.

| File                 | Description                                                                                                                                        |
|----------------------|----------------------------------------------------------------------------------------------------------------------------------------------------|
| libmy.a, main.h      | Create the static library libmy.a containing all the functions listed below:                                                                       |
| create_static_lib.sh | Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory. |

Lizbeth Garcia Lebron (Creator)

Proyect from October 19, 2022 - October 21, 2022
