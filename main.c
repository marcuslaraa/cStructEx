#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 40;
typedef struct
{
    int ra;
    char nome[50];
    char curso[50];
    float notas[4];
    int anoInicio;
    int idade;

} Aluno;

Aluno cadastrarAluno()
{
    Aluno cadastro;
    printf("Insira o RA: \n");
    scanf("%d", &cadastro.ra);

    getchar();

    printf("Digite o nome: \n");
    fgets(cadastro.nome, sizeof(cadastro.nome), stdin);


    printf("Digite o curso: \n");
    fgets(cadastro.curso, sizeof(cadastro.curso), stdin);

    printf("Insira o ano de inicio: \n");
    scanf("%d", &cadastro.anoInicio);

    printf("Insira da idade: \n");
    scanf("%d", &cadastro.idade);

    return cadastro;
}

int main()
{
    int opcao;
    int i = 0;
    Aluno alunos[40];

    do
    {
        printf("O que voce deseja fazer?\n [1] - Cadastrar novo aluno \n [2] - Listar todos alunos \n [3] - Buscar aluno pelo RA \n [4] - Exibir aluno com a maior media \n [5] - Exibir a media das medias \n [6] - Excluir aluno pelo RA \n [7] - Sair \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            alunos[i] = cadastrarAluno();
            i++;
            break;
            // case 2:

            //     buscarAluno();
            //     break;
            // case 4:
            //     exibirMaiorMedia();
            //     break;
            // case 5:
            //     exibirMediaDasMedias();
            //     break;
            // case 6:
            //     excluirAluno();
            //     break;
            // case 7:
            //     sair();
            //     break;
            // default:
            //     printf("Opcao Invalida!!!");
            //     break;
        }
    } while(opcao != 7);

    return 0;
}