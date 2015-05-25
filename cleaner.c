#include "cleaner.h"
#include <stdbool.h>

int acceptable(char * chr){
  char * pallete = "abcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ -\n";
  int i = 0;
  while(i<strlen(pallete)){
    if(chr==pallete[i])
      return 1;
    i++;
  }
  return 0;
}

char * clean(char * str){
  int i = 0;
  while(i < strlen(str)){
    if(!acceptable(str[i])){
      memmove(&str[i], &str[i + 1], strlen(str) - i);
      i--;
    }
    i++;
  }
  return str;
}
