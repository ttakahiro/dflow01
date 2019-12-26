#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "myhead.h"
void sub1(void);
void sub2(char *);

typedef struct {
    int  Order;
    int  Date;
}OrderStr;
char *file_name;
OrderStr  OneOrder;
int main(int argc, char *argv[]){
FILE  *fp;
    
    file_name = getenv("TEST_FILE_NAME");
    
    printf("getenv done\n");
    
    fp = fopen(file_name, "r");

    
    sub1();
    
    sub2(file_name);
    
    if(OneOrder.Date == 0)
       OneOrder.Date = 804;
       
    fclose(fp);
    
    fopen("File_Open", "r");
    

    return 0;
}

