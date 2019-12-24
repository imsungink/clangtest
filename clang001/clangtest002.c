#include <stdio.h>
 
char buffer[200];
int i, j;
double fp;
char *s = "baltimore";
char c;

int nDigit;
 
int main(void)
{
   c = 'l';
   i = 35;
   fp = 1.7320508;
 
   /* printf("buffer [%s]\n", buffer); */
   /* Format and print various data */
   /*
   j = sprintf(buffer, "[%s]\n", s);
   printf("j count = %d\n", j);
   j += sprintf(buffer+j, "[%c]\n", c);
   printf("j count = %d\n", j);
   j += sprintf(buffer+j, "[%d]\n", i);
   printf("j count = %d\n", j);
   j += sprintf(buffer+j, "[%f]\n", fp);
   printf("j count = %d\n", j);
   printf("string:\n%s\ncharacter count = %d\n", buffer, j);
   */

  nDigit = (int) (0 - '0');
  printf("nDigit >>  [%d]\n", nDigit);
  nDigit = (int) (1 - '0');
  printf("nDigit >>  [%d]\n", nDigit);
   
}