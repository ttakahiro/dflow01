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
	
	return 0;
}

