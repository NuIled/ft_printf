# ft_printf

This project involves creating a custom `ft_printf` function, mimicking the standard `printf` function from the C standard library.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Usage](#usage)

## Overview

The goal of this project is to implement a custom `ft_printf` function, which supports a subset of the format specifiers provided by the standard `printf` function.

## Features

The `ft_printf` function supports the following format specifiers:

- `%c`: Print a single character.
- `%s`: Print a string.
- `%p`: Print a `void *` pointer in hexadecimal format.
- `%d`: Print a decimal (base 10) number.
- `%i`: Print an integer in base 10.
- `%u`: Print an unsigned decimal (base 10) number.
- `%x`: Print a number in hexadecimal (base 16) lowercase format.
- `%X`: Print a number in hexadecimal (base 16) uppercase format.
- `%%`: Print a percent sign.

## Usage

To use the `ft_printf` function, include the header file and link against the `libftprintf.a` library:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
