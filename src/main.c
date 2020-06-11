#include <stdio.h>
#include <unistd.h>
#include "my_strlen.c"
#include "vigenere.c"
int main(int argc, char *argv[])
{
  char* str;
  char* key;
  int str_length, key_length;
  //printf("%d\n",argc);
  for (int i=1; i < argc;i=i+2)
  {
    str = argv[i];
    //printf("%s\n",str);
    str_length = my_strln(str);
    key = argv[i+1];
    key_length = my_strln(key);
    vigenere_transform(str,key,key_length,str_length);
  }
}
