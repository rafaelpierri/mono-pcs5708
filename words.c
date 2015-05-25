#include "words.h"
#include <string.h>

words * new_word(){
  return (struct words*)malloc(sizeof(struct words));
}

words * last(words * wds){
  words * w = wds;
  while(w->next){
    w = w->next;
  }
  return w;
}

words * first(words * wds){
  words * w;
  while(w->prev){
    w = w->prev;
  }
  return w;
}

words * wordifier(words * wds, char * str){
  words * w = last(wds);
  int len = strlen(str);
  int j = 0;
  int i = 0;
  for (i = 0; i <= len; i++){
    if(str[i]==' '|i==len-1){
      int a=0;
      if(i==len-1){a=i-j;}else{a=i-j-1;}
      char * sub = (char*)malloc(sizeof(char)*(a+1));
      memcpy(sub, &str[j], a+1);
      //words c = ;
      w->word = sub;
      words * b = new_word();
      b->prev = w;
      w->next = b;
      w = w->next;
      if(i<len-1){
        j=i+1;
      }
    }
  }
  return wds;
}
