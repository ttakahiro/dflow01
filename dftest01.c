#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sub1(void);
void sub2(char *);

char *file_name;
int main(int argc, char *argv[]){
	
	file_name = getenv("TEST_FILE_NAME");
	
	printf("getenv done\n");
	
	fopen(file_name, "r");

	
	sub1();
	
	sub2(argv[2]);
	
	fopen("File_OPen", "r");
	
	
	return 0;
}

