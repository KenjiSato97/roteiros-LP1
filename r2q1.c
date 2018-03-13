#include <stdio.h>


typedef struct
{
    char nome[30];
    char endereco[50];
    char curso[30];
    char matricula[10];

}tAlunos;

tAlunos gAlunos;

unsigned int consultaAlunosPorCurso(char *curso)
{
    char c2[30];
    int i,j=0;


    for(i=0;i<=29;i++)
    {
        if(strcmp(curso[i],c2)==0)
        {
         j++;
        }

    }

return j;
}


int main()
{
    int n,i;

    printf("quantos alunos deseja cadastrar:\n");

    scanf("%n", &n);

    for(i=0;i<=n;i++){

        printf("nome:");
        scanf("%c", gAlunos.name[i]);

        printf("curso:");
        scanf("%c", gAlunos.curso[i]);

        printf("endereco:");
        scanf("%c", gAlunos.endereco[i]);

        printf("matricula:");
        scanf("%c", gAlunos.matricula[i]);


    }

    n=consultaAlunosPorCurso(gAlunos.curso);

    printf("ah %d pessoas no curso de computacao", n);

    return 0;
}
