#include <stdio.h>
int main(void) {
  int n,o,r=0,rem;
  scanf("%d",&n);
  o=n;
  while(n!=0)
  {
  	rem = n%10;
        r =r*10 + rem;
        n /= 10;
  }
  if(r==o)
  {
  	 printf("Number is a palindrome.");
  }
    else
        printf("Number is not a palindrome.");
	return 0;
}
