#include <stdio.h>

int main ()
{
    int n1, n2, n3, n, i;

    scanf("%d", &n);

        n1=1;
        n2=1;

    for(i=0;i<=n-1;i++)
        {
        printf("%d, ", n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;

        }

        printf("%d. ", n1);



    return 0;
}
