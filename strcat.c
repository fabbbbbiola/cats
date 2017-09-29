#include <stdlib.h>
#include <stdio.h>


/*
strcat : takes 2 parameters, dest and src, and appends string pointed to by src to dest
*/

int main(){
  
  char src[40] = "Lord Farquaad";
  char dest[40] = "Hello my name is ";

  strcat(dest, src);

  printf("combined strings: %s\n", dest);


/*
strncat: same as strcat but has a 3rd parameter to limit the number of characters to be appended to dest
*/

  char skyya[50] = "pap pap cla cla skiddikipapap";
  char skrra[67] = "The ting go skrrra ";

  strncat(skrra, skyya, 12);
  printf("combined strings: %s\n", skrra);

  char str1[50] = "tired and hungry.";
  char str2[67] = "I am very ";
  
  strncat(str2, str1, 16);
  printf("combined strings: %s\n", str2);

  return 0;

}
