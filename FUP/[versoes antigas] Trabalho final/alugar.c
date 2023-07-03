#include<stdio.h>
#include<string.h>

typedef struct {
	
	/* Quando a opção alugar filme for acessada, os filmes e seus ids aparecem,
	o cliente escolhe o id do filme, se o id existe na struct filmes, então o cliente escreve seu nome
	para confirmar o aluguel. Se o nome existe na struct de clientes, o filme foi alugado.*/
	
	int id_alugar[6]; // vai comparar com o id da struct Filmes
	char nome_Cliente[102]; // vai comparar com a struct de clientes
	
} Alugar;

void aluguel_filme(filme *v, int *n) { // faltando parametros da struct de clientes
	
	Alugar af; // af = alugar filme
	
	printf("Que filme vai alugar?\n\n");
	scanf("%d", &af.id_alugar);
	setbuf(stdin, NULL);
	
	for(i = 0; i < n; i++) {
		
		if(v[i].id == af.id_alugar) {
			printf("Digite seu nome: ");
			fgets(af.nome_Cliente, sizeof(af.nome_Cliente), stdin);
			setbuf(stdin, NULL);
			if(alguma coisa[i].alguma coisa == af.nome_Cliente) {// parametros a serem dados
				printf("O filme %s foi alugado!\n", v[i].titulo);
				v[i].disp = 0; // o filme da posicao i ficou indisponivel
			}
		}	
		else if(v[i] != af.id_alugar)
			printf("O filme desejado nao existe.");
		else if((v[i].id == af.id_alugar) && (v[i].disp == 0))
			printf("O filme ja foi alugado.");
	}
}
/*Alugar filme
	Nome do clinte
	endereco
	telefone
	id e titulo
	data de locacao
	data pra devolucao*/
