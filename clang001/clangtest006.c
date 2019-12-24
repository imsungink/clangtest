#include <stdio.h>
int main() {
  int i, j;
  int integer = 123;
  char character = 'c';
  char string[] = "hello, world";
  int* pointer = &integer;
  double pi = 3.141592;
  char buf[100];

  j = sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
  printf("1. J >> %d\n",j);
  printf("%s \n", buf);

  j = sprintf(buf, "character : %c \n", character);
  printf("2. J >> %d\n",j);
  printf("%s \n", buf);

  j = sprintf(buf, "string : %5.5s \n", string);
  printf("3. J >> %d\n",j);
  printf("%s \n", buf);

  j = sprintf(buf, "pointer addr : %p \n", pointer);
  printf("4. J >> %d\n",j);
  printf("%s \n", buf);

  j = sprintf(buf, "floating point : %e // %f \n", pi, pi);
  printf("5. J >> %d\n",j);
  printf("%s \n", buf);



 
  return 0;
}