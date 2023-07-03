#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	
	int id;
	char titulo[102];
	char genero[20];
	char clas[30];
	int disp;
	
} filme;

filme cadastrar_filme() {
	
	filme f;
	
	printf("ID: ");
	scanf("%d", &f.id);
	setbuf(stdin, NULL); // limpar o buffer do teclado
	
	printf("Nome: ");
	fgets(f.titulo, sizeof(f.titulo), stdin);
	
	printf("Genero: ");
	fgets(f.genero, sizeof(f.genero), stdin);
	setbuf(stdin, NULL);
	
	printf("Classificacao: ");
	fgets(f.clas, sizeof(f.clas), stdin);
	setbuf(stdin, NULL);
	
	f.disp = 1;
	
	printf("\n");
	return f; 
}
 
filme* inserirCadastro(filme *v, int *n, filme novo) {
	
	v = (filme*) realloc(v, (*n+1)*sizeof(filme));
	if(v == 0) return 0;
	
	v[*n] = novo;
	(*n)++;
	return v;
}

filme* removerfilme(filme v , int id, int *n) {

    int i, encontrou = 0;
    for(i = 0; i < *n; i++) {
        if(v[i].id == id) {
            v[i] = v[*n-1];
            v = (filme*) realloc(v, (*n-1)*sizeof(filme));
            (*n)--;
            encontrou = 1;
        }
    }
    if(!encontrou)
       	printf("ID nao encontrado.\n");
    else
    	printf("Filme removido.\n");
    return v;
}

void menu() {
		
	printf("\t\t|******************************************************|\n");
	printf("\t\t|*                                                    *|\n");
	printf("\t\t|*                    BEM VINDO!                      *|\n");
	printf("\t\t|*                                                    *|\n");
	printf("\t\t|*                LOCADORA DO BARUEL                  *|\n");
	printf("\t\t|*                                                    *|\n");
	printf("\t\t|*~~~~~~~~~~~~~~~~~~~~~~~ MENU ~~~~~~~~~~~~~~~~~~~~~~~*|\n");
	printf("\t\t|*                                                    *|\n");
	printf("\t\t|*                 1 - Cadastrar Filme                *|\n");
	printf("\t\t|*                 2 - Cadastrar Cliente              *|\n");
	printf("\t\t|*                 3 - Listar Filmes                  *|\n");
	printf("\t\t|*                 4 - Listar Clientes                *|\n");
	printf("\t\t|*                 5 - Remover Filme                  *|\n");
	printf("\t\t|*                 6 - Pesquisar Filmes/Clientes      *|\n"); //por genero, por titulo e id
	printf("\t\t|*                 7 - Alugar Filme                   *|\n");
	printf("\t\t|*                 8 - Devolucao                      *|\n");
	printf("\t\t|*                 9 - Relatorios                     *|\n");
	printf("\t\t|*                 10 - Sair                          *|\n");
	printf("\t\t|*                                                    *|\n");
	printf("\t\t|******************************************************|\n");	

}

int main() {
	
	int op = 0;
	filme *v = 0;
	int i, n = 0; 
		
	while (op != 10) {
		menu();
		
		scanf("%d", &op);
			
		switch(op){
			case 1: {
				filme a = cadastrar_filme(); // filme a eh o filme a ser lido, depois incluido.
				v = inserirCadastro(v, &n, a);
				system("cls"); // funcao para limpar a tela(Cabivel de mudanca)
				printf("Adicionado com sucesso!\n");
				break;
			}
			
			case 3: { // listar filmes
    			for (i = 0; i < n; i++) {
    				printf("Id: %d\nTitulo: %sGenero: %sClassificacao: %s\n", v[i].id, v[i].titulo, v[i].genero, v[i].clas);
				}
				if(n == 0) // caso a quantidade n do vetor volte a ser 0, nao vai ter nada, entao adicionei essa condicao
					printf("Nao ha nenhum filme cadastrado.\n"); 
				break;
			}
			
			case 5: { //remover filme
				int id;
				printf("Digite o ID do filme a ser removido: ");
				scanf("%d", &id);
				v = removerfilme(v, id, &n);
				//system("cls"); // funcao para limpar a tela(Cabivel de mudanca)
				break;
			}
			
			case 10: 
				return(0); // fechando o sistema
	    }		      
	}   
	
	if (v == 0) {
        printf("Erro na alocacao!\n");
        return 1;
    }
	
	free(v);
	
	return 0;
}
