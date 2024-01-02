#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int main(int argc , char *argv[]) {
  printf("Number of arguments entered : %d",argc);
  for(int i=1;i<argc;i++){
    printf("\n argument %d is %s",i,argv[i]);
  }
  return 0;

}