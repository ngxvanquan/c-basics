<code>#include <stdio.h></code> - input output

\* thing that always appear in a C program

-   <code>is main()</code>. This call a function.
-   any code inside its curly brackets {} will be executed
-   Every c statement ends a semicolon ; *\

<code>int main() {</code> <br>
// this is single comment in c <br>
/* this this multiple comment in c */

// <code>printf()</code> output values or text in c to terminal <br>
// this statement print text "Hello World" to console <br>
<code>printf("Hello World");</code> <br>
"<code>\n</code>" is called escape sequence, it force the cursor to change its position to the beginning

#### WHEN WORKING WITH TEXT
-   it must be wrapped inside double quotations mark ""
-   Insert new line, use the \n character


-   of the next text line on terminal:
-   -   <code>\t</code> create horizontal tab
-   -   <code>\\\\</code> insert a backslash character \
-   -   <code>\\"</code> insert double quotations character \"
-   -   <code>\\'</code> insert single quotations character \' <br>
        <code>
        printf("Hello World 2\n"); <br>
        printf("Hello World 3\n");
        </code>

/\* Variables are containers for storing date values, like numbers and characters

-   in c, there are different type of variables (define with different keywords)
-   <code>int</code> - stores integers (whole numbers), without decimals, such as 123 or -123
-   <code>float</code> - stores f3Gloating point numbers, with decimals, such as 19.99 or -19.99
-   <code>char</code> - stores single character, such as 'a' or 'B', character are surround by single quotes \*/

// ========= VARIABLE ========== <br>
-   Declaring (Creating) Variables <br>
-   Syntax: <code>type variableName = value</code>;

-   **type** is one of C types (such as int)
-   **variableName** is the name of variable (such as x or myName)
-   the equal sign is used to assign a value to the variable \*/

#### Declare a variable <br>
<code>int myNum</code>

#### assign a value to the variable <br>
<code>myNum = 2008;</code>

// ========== **FORMAT SPECIFIERS** ========== <br>
-   Format specifiers **are used together with printf() function** to tell the compiler

-   what of data the variables storing, It is basically a placeholder for the variable value.
-   a format specifiers start with a percentage sign <code>%</code>, followed by a character
-   to output the value of int variable, use format specifier %d surrounded by double quotes inside the printf() function
-   **use %c for char**, **%f for float**

#### Create variables <br>
<code>int myNum2 = 15</code>; // Integer (whole number) <br>
<code>float myFloatNum = 5.99;</code> // Floating point number <br>
<code>char myLetter = 'D';</code> // Character

#### Print variables <br>
<code>
printf("%d\n", myNum2); <br>
printf("%f\n", myFloatNum); <br>
printf("%c\n", myLetter);
</code>

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
/_ All variables name must be identified with unique names
_ These unique names are called identifiers \* Identifiers can be short name (like x and y) or more descriptive names (age, sum, totalVolume)

-   It is recommended to use descriptive names in order to create understandable and maintainable code: \*/

// Good variable
<code>int minutesPerHour = 60;</code>
// ok, but not easy to understand what m actually is
<code>int m = 60;</code>

// GENERAL RULE FOR NAMING VARIABLES ARE
/\* Names can content Letter, Digits and Underscores

-   Names must begin with a Letter or Underscores
-   Names are case-sensitive (myVar and myvar are different variables)
-   Names cannot contain whitespace or special characters like !@#$% etc
-   Reserved words (such as int) cannot be used as names \*/

    // return 0 - end of main() function
    return 0;
    }
