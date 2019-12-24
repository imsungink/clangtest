#include <stdio.h>
 
char buffer[200];
int i, j;
double fp;
char *s = "baltimore";
char c;
 
int main(void)
{
   c = 'l';
   i = 35;
   fp = 1.7320508;
 
   /* Format and print various data */
   j = sprintf(buffer, "%s\n", s);
   printf("1. J >> %d\n",j);
   
   j += sprintf(buffer+j, "%c\n", c);
   printf("2. J >> %d\n",j);
   j += sprintf(buffer+j, "%d\n", i);
   printf("3. J >> %d\n",j);
   j += sprintf(buffer+j, "%f\n", fp);
   printf("4. J >> %d\n",j);
   printf("string:\n%s\ncharacter count = %d\n", buffer, j);
}