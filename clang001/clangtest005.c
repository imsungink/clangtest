#include <stdio.h>
#include <string.h>



#define DAT_UNISYS_PATH "/app/arch/billing/datif/unisys/"
#define RCV_FILE_NAME1 "KTTRS"
#define RCV_FILE_NAME21 "IA"
#define RCV_FILE_NAME22 "SA"

#define DASH "_"

#define AREA_CD_01 "01"
#define AREA_CD_02 "02"

char buffer[200];
char * return_string;

void main(int argc, char const *argv[]){

    printf("argv : %d\n", argc);

    printf("argv[0] : %s\n", argv[0]);

    printf("argv[1] : %s\n", argv[1]);

    /*
    j = sprintf(buffer, "%s\n", s);
    printf("1. J >> %d\n",j);
    printf("string:%s\ncharacter count = %d\n", buffer, j);
    */

    char s_Argv0[7] = "201912\0";
    char szFilePath [128];
    char szFileName [256];
    char szRecvFileName[265];

    return_string = strcpy(szFilePath, DAT_UNISYS_PATH);
    printf("return_string : %s\n", return_string);

    sprintf(szFileName, "%5.5s%6.6s%s%2.2s%s%2.2s", RCV_FILE_NAME1 +2, s_Argv0, DASH, RCV_FILE_NAME21, DASH, AREA_CD_01 );
    printf("szFileName :%s\n", szFileName);

    printf("s_Argv0 :%c\n", s_Argv0);
    printf("s_Argv0 :%c\n", s_Argv0 +3);




}