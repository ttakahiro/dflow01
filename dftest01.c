#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sub1(void);
void sub2(char *);

char *file_name;
int main(int argc, char *argv[]){
FILE  *fp;
	
	file_name = getenv("TEST_FILE_NAME");
	
	printf("getenv done\n");
	
	fp = fopen(file_name, "r");

	
	sub1();
	
	sub2(file_name);
	
	fclose(fp);
	
	fopen("File_OPen", "r");
	

	return 0;
}

