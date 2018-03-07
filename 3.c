#include <stdio.h>
#include <string.h>

int main()
{
    char p[21]={0}, p2[21]={0};
    int i,t, q;

    scanf("%s", p);

    t = strlen (p);

    for(i=0, q=t-1; i<= t-1; i++, q--)
    {
        p2[i]=p[q];

    }

    if (strcmp(p,p2)==0)
    {
        printf("%s eh palíndromo.", p);


    }else{


        printf("%s n eh palíndromo.", p);

    }



return 0;
}
