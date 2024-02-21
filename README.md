# 42Madrid [**printf**](subjects/printf_subject_en.pdf) proyect implementation
This proyect consists in creating a library that contains the essential information to reproduce `printf` C standard library's function. In this proyect we were allowed to use libft funcions. Some of their behavior have changed, in order to gain extra functionality to make printf run properly and not recreating functions.

![C](https://img.shields.io/badge/C-a?style=for-the-badge&logo=C&color=grey)

## Usage:

1. Clone the repository:

		git clone https:://github.com/riveroo19/42my_printf.git

2. Go inside the proyect directory and type `make`:

		cd 42my_printf; make

3. (Optional) Remove object files:

		make clean

4. Take `libftprintf.a` file to one of your proyects and include the ft_printf header on your files:

```C
#include "path/to/ft_printf.h"

/*
	code
*/
```
5. Compile using `libftprintf.a`:

		gcc <.c files> -L. -lft -o <program>
		./<program>

## Make options:

- `all`: compiles the library
- `re`: recompiles the library
- `clean`: removes all object files
- `fclean`: removes `libft.a`and object files

## My_printf specifications:

It supports the following conversion specifiers:

|Specifier|Output|
|---|---|
|`%c`|A character|
|`%s`|String|
|`%p`|Pointer address|
|`%d`|Decimal (base 10) number|
|`%i`|Integer in base 10|
|`%u`|Unsigned decimal (base 10) number|
|`%x`|Unsigned hexadecimal (lowercase)|
|`%X`|Unsigned hexadecimal (uppercase)|
|`%%`|Prints `%`character|

It works as `printf`, but the conversion types supported are limited, and the extra functionalities.

## Disclaimer
> At [42School](https://en.wikipedia.org/wiki/42_(school)), almost every project must be written in accordance to the [Norm](subjects/42norm.pdf), the school's coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.

