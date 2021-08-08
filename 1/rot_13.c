//Write a program that takes a string and displays it, replacing each of its
//letters by the letter 13 spaces ahead in alphabetical order.
//
//'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
//
//The output will be followed by a newline.
//
//If the number of arguments is not 1, the program displays a newline.

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int rot_13(char c)
{
    if ((c >= 'a' && c <= 'n') || (c >= 'A' && c <= 'N'))
        c += 13;
    else if ((c >= 'm' && c <= 'z') || (c >= 'M' && c <= 'Z'))
        c -= 13;
    return (c);
}

int main(int ac, char **av)
{
    if (ac == 2)
    
        while (*av[1])
            ft_putchar(rot_13(*av[1]++));
    ft_putchar('\n');
        return (0);
}
