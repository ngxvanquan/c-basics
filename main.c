#include <stdio.h> // standard input ouput

/* thing that always appear in a C program  
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
  * float - stores f3Gloating point numbers, with decimals, such as 19.99 or -19.99
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

  // ========== FORMAT  SPECIFIERS ==========
  /* Format specifiers are used together with printf() function to tell the compiler 
  * what of data the variables storing, It is basically a placeholder for the variable value. 
  * a format specifiers start with a percentage sign %, followed by a character
    * to output the value of int variable, use format specifier %d surrounded by duoble quotes inside the printf() function
  * use %c for char, %f for float */

  // Create variables
int myNum2 = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum2);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
  
  // To combine both text and a variable, separate them with a comma inside the printf() function:
  printf("My number is %d and my letter is %c", myNum, myLetter);

  // also just print a value without storing it in a variable, as long as you use the correct format specifier:
  printf("My favorite number is: %d", 15);
printf("My favorite letter is: %c", 'D');  

  // change value 
  int myNum3 = 10; // myNum3 is 10
  myNum3 = 16; // now myNum3 is 16

  // multiple variables 
  int x = 5, y = 6, z = 50;
  int x2, y2, z2;
  x2 = 5;
  y2 = 6;
  z2 = 50;


// ========== VARIABLE NAME ==========
  /* All variables name must be identified with unique names
    * These unique names are called identifiers
    * Identifiers can be short name (like x and y) or more descriptive names (age, sum, totalVolume)
  * It is recommended to use descriptive names in order to create understandable and maintainable code: */

  // Good variable 
  int minutesPerhour = 60;
  // ok, but not easy to understand what m actualy is 
  int m = 60;

// GENERAL RULE FOR NAMING VARIABLES ARE 
/* Names can content Letter, Digits and Underscores 
  * Names must begin with a Letter or Underscores  
  * Names are case-sensitive (myVar and myvar are different variables)
* Names cannot contain whitespaces or special characters like !@#$% etc 
* Reserved words (such as int) cannot be used as names */

  // return 0 - end of main() function 
  return 0;
}
