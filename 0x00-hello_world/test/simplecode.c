#include <stdio.h>

int main()
{
  int a, b, sum;

  printf("Enter a: ");
  scanf("%d", &a);
  
  printf("Enter b: ");
  scanf("%d", &b);

  // It should really work now
  sum = a + b;


  printf("The answer is: %d\n", sum);
  return 0;
}
