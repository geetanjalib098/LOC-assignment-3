#include <stdio.h>

int main()
{
  int a, b, Temp;
 
  printf("\nPlease Enter the value of a and b\n");
  scanf("%d %d", &a, &b);
 
  printf("\nBefore : a = %d and b = %d\n", a, b);
 
  Temp = a;
  a    = b;
  b    = Temp;
 
  printf("\nAfter   : a = %d and b = %d\n", a, b);
 
  return 0;
}