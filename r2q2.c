#include <stdio.h>

typedef struct
{
	char nome[30];
	char estilo[30];
	int integrantes;
	int ranking;



}tBanda;

int bandas(char *b)
{
     	int n, i;
	printf("quantas bandas deseja cadastrar:");
	scanf("%d",&n)
	for (i=0;i<=n-1;i++)
	{
		printf("nome");
		scanf("%c", b.nome[i]);
	
		printf("estilo");
		scanf("%c", b.estilo[i]);

		printf("integrantes");
		scanf("%c", b.integrantes[i]);]

		printf("ranking");
		scanf("%c", b.ranking[i]);


	
	}
	return n;
}
void printa(char *b, int n)
{
	int i
	
	for(i=0;i<=n-1;i++)
	{
		printf("%c", b.nome[i]);
		printf("%c", b.estilo[i]);
		printf("%d", b.integrantes[i]);
		printf("%d", b.ranking[i]);

	}


}
int Ranking(char *b)
{
	int i,n, k;
	printf("qual o numero do ranking que vc deseja consultar:");

	scanf("%d", &n);

        for(i=0;i<=99;i++)
	{
	 	if(b.ranking[i]==n)
		{
		k=i;
		break;

		}       

	}

        printf("a banda do raking %d eh %c",k, b.nome[k]);
}
int Estilo(char *b ,int n)
{
	int i;
	char k[30];
	printf("qual estilo de musica vc deseja consultar:");

	scanf("%c", k);

        for(i=0;i<=n-1;i++)
	{
	 	if(b.estilo[i]==k)
		{
		printf("%c", b.estilo);

		}       

	}

}
int Ranking(char *b, int n)
{
	int i;
	char k[30];
	printf("qual o nome que vc deseja ver em qual raking esta:");

	scanf("%c", k);

        for(i=0;i<=n-1;i++)
	{
	 	if(b.name[i]==k)
		{
		printf("%d", b.ranking[i]);

		}       

	}

}


