/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 20:09:29 by abernita          #+#    #+#             */
/*   Updated: 2021/10/25 11:17:27 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
 
int string_length(char*);
void reverse(char*);
 
int main()
{
   char s[100];
 
   printf("Enter a string\n");
   gets(s);
 
   reverse(s);
 
   printf("Reverse of the string is \"%s\".\n", s);
 
   return 0;
}
 
void reverse(char *s)
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
 
int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer + c) != '\0' )
      c++;
 
   return c;
}
