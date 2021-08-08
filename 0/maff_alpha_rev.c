//Write a program that displays the alphabet in reverse, with even letters in
//uppercase, and odd letters in lowercase, followed by a newline.
//Example:
//$> ./maff_revalpha | cat -e
//zYxWvUtSrQpOnMlKjIhGfEdCbA$

#include <unistd.h>

int main(void)
{
    int i;
  //  int j;

    i = 'Z';
    while(i >= 'A')
    {
        if (i % 2 == 1)
        {
            write(1, &i, 1);
            i--;
        }
        else
        {
            i+=32;
            write(1, &i, 1);
            i-=32;
            i--;
        }
        
    }
    
}
