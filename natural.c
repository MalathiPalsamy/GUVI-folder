#include <stdio.h>

int main(void) {
   int i,n,sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    sum+=i;
   }
   printf("Sum:");
   printf("%d",sum);
	return 0;
}
