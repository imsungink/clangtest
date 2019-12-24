#include <string.h>
#include <stdio.h>

#define BUF_SIZE 20


int main(int argc, char const *argv[])
{
    /* code */
    char buffer[BUF_SIZE +1];
    char *string1;
    char *string2;

    memset(buffer, 0, sizeof(buffer));
    printf("\nbuffer contents: [%s]\n", buffer);

    string2 = (char *) memset(buffer, 'A', 10);
    memset(buffer, 'A', 10);
    printf("\nbuffer contents: [%s]\n", buffer);

    memset(buffer+10, 'B', 10);
    printf("\nbuffer contents: [%s]\n", buffer);

    return 0;
}
