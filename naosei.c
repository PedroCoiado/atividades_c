#include <stdio.h>

int main()
{ 
    float n1, n2, n3, n4, media;

    printf("Digite a Nota do 1° Aluno:\n");
    scanf("%f",&n1);

    printf("Digite a Nota do 2° Aluno:\n");
    scanf("%f",&n2);

    printf("Digite a Nota do 3° Aluno:\n");
    scanf("%f",&n3);

    printf("Digite a Nota do 4° Aluno:\n");
    scanf("%f",&n4);

    media = (n1 + n2 + n3 + n4)/4;

    printf("A média dos alunos é: %f \n", media);

    if(media >= 6) 
    {
        printf("Se a média for acima de 6 está aprovado \n");
    }
    else
    {
        printf("Se a média for abaixa de 6 está reprovado \n");
    }
    

}