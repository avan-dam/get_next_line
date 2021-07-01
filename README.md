# get_next_line

The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.

**Subject:**

Constraints are as follows:
- Calling your function get_next_line in a loop will then allow you to read the text available on a file descriptor one line at a time until the EOF
- Make sure that your function behaves well when it reads from a file and when it reads from standard input.
- libft is not allowed for this project. You must add a get_next_line_utils.c file which will contain the functions that are needed for your get_next_line to work.
- Your program must compile with the flag -D BUFFER_SIZE=xx. which will be used as the buffer size for the read calls in your get_next_line. This value will be modified by your evaluators and by moulinette.
- Compilation will be done this way: gcc -Wall -Werror -Wextra -D BUFFERSIZE=32 get_next_line.c get_next_line_utils.c
- Your read must use the BUFFER_SIZE defined during compilation to read from a file or from stdin
- In the header file get_next_line.h you must have at least the prototype of the function get_next_line


**Usage and Testing:**

To run the program run the following commands in terminal to test

![Screenshot 2021-07-01 at 12 21 23](https://user-images.githubusercontent.com/61982496/124108923-e77a3f80-da66-11eb-8a39-0a0fc583a4f1.png)

I created a testing function which will open test/test.txt and use my get_next_line function to read from the file line by line.
In the screenshot above you can see that what is in the test/test.txt is read correctly.


Suceeded with 102/100
