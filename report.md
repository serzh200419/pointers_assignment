Report

Assignment 1: Basics of Pointers

In this program, I declared an integer called x and put 42 in it. Then I made a pointer p and set it to point to x. I printed the address of x using &x and also using p. After that, I changed the value of x through the pointer * p and printed the new value. I saw that the address from &x and p is the same, and I can change x using the pointer. It was interesting to see how the pointer gives me the access to the original variable.

Assignment 2: Pointer Arithmetic

Here I made an array with 5 numbers: 1, 2, 3, 4, 5. I used a pointer to go through the array and print each number using *(p + i). Then I multiplied each number by 2 using the pointer. Finally, I printed the modified array using the array name. I learned that pointer arithmetic can go through arrays, and changing the value using the pointer changes the array itself. It was nice to see that accessing numbers with a pointer works same as using the array.

Assignment 3: Pointers and Functions

I wrote a function called swap that takes two pointers to integers and swaps the values. In the main program, I called swap with addresses of two numbers, x and y. I printed the numbers before and after calling swap. I saw that using pointers allows the function to change the real variables, not just copies. Without pointers, the swap would not work. It was good to see how pointers can pass data to a function and change it.


Assignment 4: Pointers to Pointers

In this program, I made a variable x and a pointer p to it. Then I made another pointer pp that points to p. I printed the value of x using *p and **pp. I also printed addresses to see the levels of pointers. It was interesting to understand that **pp goes through two levels of pointers to get the value. Double pointers can be useful when I want to manage pointers or pass pointers to functions.


Assignment 5: Strings and Character Pointers

I declared a string as char str[] = "Hello" and made a pointer to the first character. I printed the string using the pointer and a loop, without using array indexes. Then I counted the characters in the string using pointer arithmetic. I saw that strings can be traversed with pointers and I can count characters using only the pointer. It was useful to see how pointers work with text, not only numbers.


Conclusion

I did all five assignments about pointers in C. I learned how pointers store addresses, can change variable values, and how pointer arithmetic works. I saw how to use pointers with arrays, functions, double pointers, and strings. These exercises helped me understand pointers more clearly, and now I can see how they work in different situations.
