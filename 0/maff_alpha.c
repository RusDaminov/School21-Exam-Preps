//Write a program that displays the alphabet, with even letters in uppercase, and
//odd letters in lowercase, followed by a newline.
//Example:
//$> ./maff_alpha | cat -e
//aBcDeFgHiJkLmNoPqRsTuVwXyZ$

#include <unistd.h>

int main(void)
{
    int i;
    int j;

    i = 'a';
    while(i <= 'z')
    {
        if (i % 2 == 1)
        {
            write(1, &i, 1);
            i++;
        }
        else
        {
            i-=32;
            write(1, &i, 1);
            i+=32;
            i++;
        }
        j++;
    }
    
}
