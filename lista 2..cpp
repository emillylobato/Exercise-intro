#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
};

int main() {
    const int numAlunos = 5;
    
    struct Aluno alunos[numAlunos];

    for (int i = 0; i < numAlunos; ++i) {
        printf("Aluno %d:\n", i + 1);
        printf("Matr�cula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        printf("\n");

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
    }

    float maiorNota1 = alunos[0].nota1;
    int indiceMaiorNota1 = 0;

    for (int i = 1; i < numAlunos; ++i) {
        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            indiceMaiorNota1 = i;
        }
    }

    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s\n", alunos[indiceMaiorNota1].nome);
    printf("Nota da primeira prova: %.2f\n\n", alunos[indiceMaiorNota1].nota1);

    float maiorMedia = alunos[0].media;
    int indiceMaiorMedia = 0;

    for (int i = 1; i < numAlunos; ++i) {
        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
            indiceMaiorMedia = i;
        }
    }

    printf("Aluno com maior m�dia geral:\n");
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("M�dia geral: %.2f\n\n", alunos[indiceMaiorMedia].media);

    float menorMedia = alunos[0].media;
    int indiceMenorMedia = 0;

    for (int i = 1; i < numAlunos; ++i) {
        if (alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media;
            indiceMenorMedia = i;
        }
    }

    printf("Aluno com menor m�dia geral:\n");
    printf("Nome: %s\n", alunos[indiceMenorMedia].nome);
    printf("M�dia geral: %.2f\n\n", alunos[indiceMenorMedia].media);

    printf("Situa��o dos alunos:\n");
    for (int i = 0; i < numAlunos; ++i) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("M�dia geral: %.2f\n", alunos[i].media);
        
        if (alunos[i].media >= 6.0) {
            printf("Situa��o: Aprovado\n\n");
        } else {
            printf("Situa��o: Reprovado\n\n");
        }
    }

    return 0;
}


