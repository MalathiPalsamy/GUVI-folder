#include <stdio.h>

int main(void) {
  char a;
  scanf("%c",&a);
  if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
    printf("Character is Vowel");
  else
    printf("Character is Consonant");
	return 0;
}