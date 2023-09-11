include <stdio.h>
include <stdlib.h>
#define TAM 200

struct projeto
{
	int codigo, ano, status;
	char titulo[30];
	char descricao[30];
	char user[30];
	char tempo[30];
	char cidade[30];
	char estado[30];
};
int main()
{
	struct projeto qtd[TAM];
	struct projeto ordem
	int i, op, j;
	op = 0;
	while (op !=7)
	{
		printf("*****************************************************");
		printf("\n1-Cadastrar um projeto. \n");
		printf("2-Vizualizar todos os projetos. \n");
		printf("3-Vizualizar apenas status 1. \n");
		printf("4-Vizualizar apenas status 2. \n");
		printf("5-Vizualizar apenas status 3.\n");
		printf("6-Vizualizar por ano. \n");
		printf("7-SAIR \n");
		printf("STATUS:[1]-A fazer [2]-Fazendo [3]-Concluido \n");
		printf("Digite a opcao desejada \n");
		printf("***************************************************** \n");
		scanf("%d", &op);
		fflush(stdin);
		system("cls");
		if (op == 1)
		{
			system("cls");
			for (i=0; i<TAM; i++)
			{
				system("cls");
				printf("Codigo de projeto: %d\n", i+1);
				printf("Digite o titulo do projeto:");
				scanf("%30[^\n]s", &qtd[i].titulo);
				fflush(stdin);
				printf("Digite a descricao do projeto:");
				scanf("%30[^\n]s", &qtd[i].descricao);
				fflush(stdin);
				printf("Digite o ano do projeto:");
				scanf("%d", &qtd[i].ano);
				fflush(stdin);
				printf("Digite o status do projeto:");
				scanf("%d", &qtd[i].status);
				fflush(stdin);
				printf("Digite o gerente do projeto:");
				scanf("%30[^\n]s", &qtd[i].user);
				fflush(stdin);
				printf("Digite a cidade do projeto:");
				scanf("%30[^\n]s", &qtd[i].cidade);
				fflush(stdin);
				printf("Digite o estado:");
				scanf("%30[^\n]s", &qtd[i].estado);
				fflush(stdin);
				printf("Digite o tempo para finalizacao do projeto:");
				scanf("%30[^\n]s", &qtd[i].tempo);;
				fflush(stdin);
			}
		}
		else
		{
			if (op == 2)
			{
				system("cls");
				for (i=0; i<TAM; i++)
				{
					printf("*****************************************************");
					printf("\nCodigo de projeto: %d \n", i+1);
					printf("\nTITULO: %s\n", qtd[i].titulo);
					printf("\nDESCRICAO: %s\n", qtd[i].descricao);
					printf("\nANO: %d\n", qtd[i].ano);
					printf("\nSTATUS: %d\n", qtd[i].status);
					printf("\nGERENTE: %s\n", qtd[i].user);
					printf("\nCIDADE: %s\n", qtd[i].cidade);
					printf("\nESTADO: %s\n", qtd[i].estado);
					printf("\nTEMPO PARA FINALIZACAO: %s\n", qtd[i].tempo);
					printf("***************************************************** \n");
				}
			}
			else
			{
				if (op == 3)
				{
					for (i=0; i<TAM; i++)
					{
						if (qtd[i].status == 1)
						{
							printf("\nCodigo de projeto: %d \n", i+1);
							printf("\nTITULO: %s\n", qtd[i].titulo);
							printf("\nDESCRICAO: %s\n", qtd[i].descricao);
							printf("\nANO: %d\n", qtd[i].ano);
							printf("\nSTATUS: %d\n", qtd[i].status);
							printf("\nGERENTE: %s\n", qtd[i].user);
							printf("\nCIDADE: %s\n", qtd[i].cidade);
							printf("\nESTADO: %s\n", qtd[i].estado);
							printf("\nTEMPO PARA FINALIZACAO: %s\n", qtd[i].tempo);
							printf("***************************************************** \n");
						}
						else
						{
							printf("\nNAO HA PROJETOS COM ESSE STATUS!!! \n");
						}
					}	
				}
				else
				{
					if (op == 4)
					{
						for (i=0; i<TAM; i++)
						{
							if (qtd[i].status == 2)
							{
								printf("\nCodigo de projeto: %d \n", i+1);
								printf("\nTITULO: %s\n", qtd[i].titulo);
								printf("\nDESCRICAO: %s\n", qtd[i].descricao);
								printf("\nANO: %d\n", qtd[i].ano);
								printf("\nSTATUS: %d\n", qtd[i].status);
								printf("\nGERENTE: %s\n", qtd[i].user);
								printf("\nCIDADE: %s\n", qtd[i].cidade);
								printf("\nESTADO: %s\n", qtd[i].estado);
								printf("\nTEMPO PARA FINALIZACAO: %s\n", qtd[i].tempo);
								printf("***************************************************** \n");
							}
							else
							{
								printf("\nNAO HA PROJETOS COM ESSE STATUS!!! \n");
							}
						}
					}
					else
					{
						if (op == 5)
						{
							for (i=0; i<TAM; i++)
							{
								if (qtd[i].status == 3)
								{
									printf("\nCodigo de projeto: %d \n", i+1);
									printf("\nTITULO: %s\n", qtd[i].titulo);
									printf("\nDESCRICAO: %s\n", qtd[i].descricao);
									printf("\nANO: %d\n", qtd[i].ano);
									printf("\nSTATUS: %d\n", qtd[i].status);
									printf("\nGERENTE: %s\n", qtd[i].user);
									printf("\nCIDADE: %s\n", qtd[i].cidade);
									printf("\nESTADO: %s\n", qtd[i].estado);
									printf("\nTEMPO PARA FINALIZACAO: %s\n", qtd[i].tempo);
									printf("***************************************************** \n");
								}
								else
								{
									printf("\nNAO HA PROJETOS COM ESSE STATUS!!! \n");
								}
							}
						}
						if( op == 6)
						{
							system("cls");
							for (i=0; i<TAM; i++)
							{
								for (j=i+1; j<TAM; j++)
								{
									if (qtd[i].ano > qtd[j].ano)
									{
										ordem = qtd[i];
										qtd[i] = qtd[j];
										qtd[j] = ordem;
									}
								}
							}
							for (i=0; i<TAM; i++)
							{
								printf("\nCodigo de projeto: %d \n", i+1);
								printf("\nTITULO: %s\n", qtd[i].titulo);
								printf("\nDESCRICAO: %s\n", qtd[i].descricao);
								printf("\nANO: %d\n", qtd[i].ano);
								printf("\nSTATUS: %d\n", qtd[i].status);
								printf("\nGERENTE: %s\n", qtd[i].user);
								printf("\nCIDADE: %s\n", qtd[i].cidade);
								printf("\nESTADO: %s\n", qtd[i].estado);
								printf("\nTEMPO PARA FINALIZACAO: %s\n", qtd[i].tempo);
								printf("***************************************************** \n");
							}
						}
					}
				}
			}
		}
	}
	return (0);
}
