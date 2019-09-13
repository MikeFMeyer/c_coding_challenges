# Spy Numbers
A program that checks whether a number is a spy number or not.
A number is called spy if the sum and product of its digits are equal.

For example:
(1 + 2 + 3) = (1 * 2 * 3)

## Installation:

To get started, clone the spy_numbers repo and go into the folder:

```
git clone https://github.com/mikefmeyer/spy_numbers
cd spy_numbers/
```

## Compiling the project:

This project uses my libft library, thus the library needs to be compiled before compiling the spy program.

### Making:

To compile the libft, you need to run the following commands:

```
cd libft/
make
```

### Compiling the spy program with libft.a

Run the following command to compile the program.

```
gcc spy.c libft.a
./a.out
```
