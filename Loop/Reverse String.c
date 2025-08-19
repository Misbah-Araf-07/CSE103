//Make a C Code for reversing a string using loop

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[100] ;
  printf("enter a number or nam: ");
  scanf("%s",&str);
  int len= strlen(str);
  printf("Revered: ");
  for (int i = len-1; i>=0; i--)
    printf("%c",mstr[i]);
  return 0;
}
   
   
   
   
   
