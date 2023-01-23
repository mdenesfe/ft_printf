# ft_printf

ft_printf is a recreation of the C library function printf. The goal of this project was to understand the inner workings of the printf function and create a similar function from scratch. The function takes a string and a list of arguments and prints them to the standard output. The code includes several helper functions such as ft_putchar, ft_putstr, ft_putnbr, ft_putadd and ft_putnbr_hex.

## Getting Started

The function starts by initializing the variable argument list using va_start. Then, it initializes a variable len to keep track of the number of characters printed. The function then iterates through the input string and checks for the presence of the '%' character, which indicates that the next character is a conversion specifier. If '%' is found, the function calls the choose function passing the next character and the variable argument list as arguments. The choose function then determines which of the conversion specifiers is used and calls the appropriate helper function. If the '%' character is not found, the function simply prints the current character. The variable argument list is closed using va_end. Finally, the function returns the number of characters printed.

The following conversion specifiers are supported:

Format        | Description
------------- | -------------
%c            |  single character
%s            |  string
%p            |  pointer address
%d            |  signed decimal integer
%i            |  signed decimal integer
%u            |  Unsigned
%x            |  unsigned hexadecimal integer (lowercase)
%X            |   unsigned hexadecimal integer (uppercase)

In addition to the standard conversion specifiers, the ft_printf function also supports the following flags:


- '0' : zero padding
- '-' : left alignment
- '+' : signed numbers must always begin with a sign
- ' ' : signed numbers should begin with a sign or a space
- '#' : alternate form
- '*' : field width is specified as an argument
- '.' : precision is specified as an argument

## Examples

```C
ft_printf("Hello, %s!\n", "world");
ft_printf("The answer is %d\n", 42);
ft_printf("%x in hex is %d in decimal\n", 255, 255);
```
Output:
```C
Hello, world!
The answer is 42
ff in hex is 255 in decimal
```

## Compiling and Running

```Bash
make
```
And executed with
```Bash
./ft_printf
```

## Limitations

Currently, ft_printf does not handle floating point numbers or wide characters. Also, it does not support all the flags that the original printf supports. These features can be added in future updates.

## Contributors
- [mdenesfe](https://github.com/mdenesfe)

## Conclusion

ft_printf is a great project to understand the inner workings of the printf function and improve your understanding of variable arguments, type conversions and formatting output. The project also helps to improve skills in C programming and algorithm development.