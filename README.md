# _printf

```_pritf``` Is an implementation of the real function ```printf```, like a copy, in which we are going to print data considering the format entered by the user. In this project we are applying the knowledge acquired in our journey at [Holberton School] (https://www.holbertonschool.com/) in cohort 11.

**Prototype:** ```int _printf(const char *, ...);```

## Mandatory Tasks:
1. - [ ] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
2. - [x] Handle conversion specifiers ```d```, ```i```.
3. - [x] Create a man page for your function.

## Advanced Tasks:
1. - [ ] Handle conversion specifier ```b```.
2. - [ ] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
3. - [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
4. - [ ] Handle conversion specifier ```S```.
5. - [ ] Handle conversion specifier ```p```.
6. - [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
7. - [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
8. - [ ] Handle the field width for non-custom conversion specifiers.
9. - [ ] Handle the precision for non-custom conversion specifiers.
10. - [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
11. - [x] Handle the custom conversion specifier ```r``` that prints the reversed string.
12. - [x] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
13. - [ ] All above options should work well together.

## Files and functions description:
* **_printf.c:** - The function ```_printf``` contains a large number of functions which allow us to make the relevant calculations for each format allowing us to return the number of characters that the function receives.
* **holberton.h:** - Contains all function prototypes used for ```_printf```.
* **_putcharacter.c:** - Contains the function ```_putchar```, which writes a character to stdout.
* **man_3_printf:** - Manual page for the implementation of ```_printf``` function.
* **func_char:** - This function allows us to print characters through the identification of the ```%c``` format.
* **func_string:** - This function allows us to print output a string of characters identified with the format ```%s```.
* **func_di:** - This function allows me to print to the standard output decimal and whole numbers identified by the format
```%i```y ```%d```.
* **func_rev:** - This function allows me through the ```%r``` format to print a character string in reverse
* **func_rot13.c:** - This function is peculiar, it allows us to rotate a string by implementing an encryption model, our ```_printf``` function does it through the ```%R``` format.

[Alejandro Rusca](https://github.com/dondropo) | [@don_dropo](https://twitter.com/don_dropo)

[Melkin Mosquera](https://github.com/melandres8) | [@melandres8](https://twitter.com/melandres8)
