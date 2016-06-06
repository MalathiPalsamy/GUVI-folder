#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  if(n>0)
     printf("Positive number");
   else if (n<0)
     printf("Negative Number");
  else
    printf("Number is Zero");
	return 0;
}
