//Write a program that takes strings as arguments, and displays its first
//argument followed by a \n.
//If the number of arguments is less than 1, the program displays \n.

#include <unistd.h>

void put(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac < 1)
        put("\n");
    else
        while(av[1][i] != '\0')
        {
            put(av[1][i]);
            i++;
        }
    put("\n");
    return (0);
}
