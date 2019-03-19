#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s, return the number of characters
    held inside it.

    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char s[])
{
  int counter = 0;
  char reading = s[0];

  while (reading != '\0') {
    counter++;
    reading = s[counter];
  }
  return counter;
}

/*
    Write a function that reverses the order of string s and outputs
    the reversed string to the input array rv. The rv array will have
    enough space for the reversed string. Don't forget to terminate
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char rv[], char s[])
{
  int l = string_length(s);
  int i;

  for (i = 0; i < l; i++) {
    rv[i] = s[l - 1 - i];
  }
  rv[i] = '\0';

  return rv;
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
