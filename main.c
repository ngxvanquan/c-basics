#include <stdio.h>

/* thing that always appear in a C program is main 
 * is main(). This call a function.
 * any code inside its curly brackets {} will be executed */
// Every c statement ends a semicolon ;

int main() {
   // this is single comment in c
  /* this this multiple comment in c */

  // printf() output values or text in c to terminal
  // this statement print text "Hello World" to console
  printf("Hello World");
  // when working with text, it must be wrapped inside double quotations mark ""
  // Insert new line, use the \n character
  /* \n is called escape sequence, it force the cursor to change its positon to the beginning 
   * of the next text line on terminal:
   * - \t create horizontal tab
   * - \\ insert a blackslash character \
   * - \" insert double quotations character
   * - \' insert single quotations character */
  printf("Hello World 2\n");
  printf("Hello World 3\n");
  
  /* Variables are containers for storing date values, like numbers and characters
  * in c, there are different type of variables (define with different keywords)
  * int - stores integers (whole numbers), without decimals, such as 123 or -123
  * float - stores floating point numbers, with decimals, such as 19.99 or -19.99
  * char - stores single character, such as 'a' or 'B', character are surround by single quotes */

  // ========= VARIABLE ==========
  /* Declaring (Creating) Variables
    * Systax: type variableName = value;
  * type is one of C types  (such as int) 
  * variableName is the name of variable (such as x or myName)
  * the equal sign is used to assign a value to the variable */
  
  // Declare a varible 
  int myNum;

  // assign a value to the variable
  myNum = 2008; 

  // return 0 - end of main() function 
  return 0;
}
