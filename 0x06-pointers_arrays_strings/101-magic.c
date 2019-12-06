#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  printf("adress of p = %p\n", &p);
  *p = *(p + 1);
  printf("adress of p = %p\n", &p);
 
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  printf("adress of a[5] = %p\n", &(a[5]));
  printf("adress of a[2] = %p\n", &(a[2]));
  printf("adress of a[0] = %p\n", &(a[0]));
  printf("adress of n = %p\n", &n);

  return (0);
}
