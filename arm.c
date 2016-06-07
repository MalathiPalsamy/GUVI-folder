#include <stdio.h>
int main()
{
    int n, o, r, result = 0;
    scanf("%d", &n);

    o = n;

    while (o!= 0)
    {
        r = o%10;
        result += r*r*r;
        o/= 10;
    }

    if(result == n)
        printf("Number is an Armstrong number.");
    else
        printf("Number is not an Armstrong number.");

    return 0;
}
