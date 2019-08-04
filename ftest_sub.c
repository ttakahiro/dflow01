#include <stdio.h>
#include <string.h>

extern char file_name[];

void sub1(void){
FILE *fp;

	fp=fopen(file_name, "r");

	fclose(fp);
}
void sub2(char *fname){
FILE *fp;

	fp=fopen(fname, "r");

	fclose(fp);

}
void test(int n) {
  int i = 0;
  if (n <= 0) {
    return;
  }
  while (1) {
    // BAD: condition is never true, so loop will not terminate.
    if (i == n) {
      break;
    }
  }
}
