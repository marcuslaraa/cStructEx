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
    int i;
    Aluno cadastro;

    printf("Insira o RA: \n");
    scanf("%d", &cadastro.ra);

    getchar();

    printf("Digite o nome: \n");
    fgets(cadastro.nome, sizeof(cadastro.nome), stdin);

    printf("Digite o curso: \n");
    fgets(cadastro.curso, sizeof(cadastro.curso), stdin);

    for(i = 0; i < 4; i++) {
        printf("Digite a nota %d:\n", i + 1);
        scanf("%f", &cadastro.notas[i]);
    }

    printf("Insira o ano de inicio: \n");
    scanf("%d", &cadastro.anoInicio);

    printf("Insira da idade: \n");
    scanf("%d", &cadastro.idade);
   
    return cadastro;
}

char *buscarAluno(int ra, Aluno alunos[], int tamanhoVetor){
    int i;

    for(i = 0; i < tamanhoVetor; i++) {
        if(alunos[i].ra == ra) {
            return alunos[i].nome;
        } 

            return "Aluno não encontrado";
    }

    

}

int main()
{
    int opcao;
    int i = 0;
    Aluno alunos[40];
    int pesquisaAluno;

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
            case 2:
                int tamanhoVetor = 10;
                printf("Digite o RA do aluno: \n");
                scanf("%d", &pesquisaAluno);
                
                char *resultado = buscarAluno(pesquisaAluno, alunos, tamanhoVetor);
                printf("%s\n", resultado);
                
                break;
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
            default:
                printf("Opcao Invalida!!!\n");
                break;
        }
    } while(opcao != 7);

    return 0;
}