#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	
	int id;
	char titulo[102];
	char genero[20];
	char clas[30];
	int disp;
	
} filme;

typedef struct {
	
	char nome[102];
	char cpf[11];
	char endereco[102];
	char telefone[13];
	
} cliente;

cliente cadastrar_cliente() {
	cliente c;
	
	printf("Nome: ");
	getchar();
	fgets(c.nome, sizeof(c.nome), stdin);
	setbuf(stdin, NULL);
	
	printf("CPF: ");
	getchar();
	fgets(c.cpf, sizeof(c.cpf), stdin);
	setbuf(stdin, NULL);
	
	printf("Endereco: ");
	fgets(c.endereco, sizeof(c.endereco), stdin);
	setbuf(stdin, NULL);
	
	printf("Telefone: ");
	fgets(c.telefone, sizeof(c.telefone), stdin);
	setbuf(stdin, NULL);
	
	return c;
}

cliente* inserirCliente(cliente *vCliente, int *ncliente, cliente novo ) {
	
	vCliente = (cliente*) realloc(vCliente, (*ncliente+1)*sizeof(cliente)); 
	if(vCliente == 0) return 0;
	
	vCliente[*ncliente] = novo;
	(*ncliente)++;
	
	return vCliente;
}

cliente* removerCliente(cliente *vCliente , char cpf[11], int *ncliente) {

    int i, encontrou = 0;
    for(i = 0; i < *ncliente; i++) {
        if(strcmp(vCliente[i].cpf, cpf) == 0) {
            vCliente[i] = vCliente[*ncliente-1];
            vCliente = (cliente*) realloc(vCliente, (*ncliente-1)*sizeof(cliente));
            (*ncliente)--;
        }
    }
    if(!encontrou)
       	printf("CPF nao encontrado.\n");
    else
    	printf("Cliente removido.\n");
    	
    return vCliente;
}

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
	
	return f; 
}

filme* inserirCadastro(filme *v, int *nfilme, filme novo) {
	
	v = (filme*) realloc(v, (*nfilme+1)*sizeof(filme));
	if(v == 0) return 0;
	
	v[*nfilme] = novo;
	(*nfilme)++;
	return v;
}

filme* removerfilme(filme *v , int id, int *nfilme) {

    int i, encontrou = 0;
    for(i = 0; i < *nfilme; i++) {
        if(v[i].id == id) {
            v[i] = v[*nfilme-1];
            v = (filme*) realloc(v, (*nfilme-1)*sizeof(filme));
            (*nfilme)--;
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
	printf("\t\t|*                 6 - Remover Cliente                *|\n");
	printf("\t\t|*                 7 - Pesquisar Filmes/Clientes      *|\n"); //por genero, por titulo e id
	printf("\t\t|*                 8 - Alugar Filme                   *|\n");
	printf("\t\t|*                 9 - Devolucao                      *|\n");
	printf("\t\t|*                 10 - Relatorios                    *|\n");
	printf("\t\t|*                 11 - Sair                          *|\n");
	printf("\t\t|*                                                    *|\n");
	printf("\t\t|******************************************************|\n");	

}

int main() {
	
	int op = 0;
	filme *v = 0;
	cliente *vCliente = 0;
	int i, nfilme = 0, ncliente = 0; 
		
	while (op != 11) {
		menu();
		
		scanf("%d", &op);
		
		if(op > 11) printf("Opcao nao encontrada.\n");
		
		switch(op){
			case 1: {
				filme a = cadastrar_filme(); // filme a eh o filme a ser lido, depois incluido.
				v = inserirCadastro(v, &nfilme, a);
				system("cls"); // funcao para limpar a tela(Cabivel de mudanca)
				printf("Filme adicionado com sucesso!\n");
				break;
			}
			
			case 2: {
				cliente c = cadastrar_cliente(); // Cliente a ser lido, depois incluido.
				vCliente = inserirCliente(vCliente, &ncliente, c);
				system("cls"); // funcao para limpar a tela(Cabivel de mudanca)
				printf("Cliente adicionado com sucesso!\n");
				break;
			}
			
			case 3: { // listar filmes
    			for (i = 0; i < nfilme; i++) {
    				printf("Id: %d\nTitulo: %sGenero: %sClassificacao: %s\n", v[i].id, v[i].titulo, v[i].genero, v[i].clas);
				}
				if(nfilme == 0) // caso a quantidade n do vetor volte a ser 0, nao vai ter nada, entao adicionei essa condicao
					printf("Nao ha nenhum filme cadastrado.\n"); 
				break;
			}
			
			case 4: { // listar clientes
    			for (i = 0; i < ncliente; i++) {
    				printf("Nome: %sCPF: %s\nEndereco: %sTelefone: %s\n", vCliente[i].nome, vCliente[i].cpf, vCliente[i].endereco, vCliente[i].telefone);
				}
				if(ncliente == 0) // caso a quantidade n do vetor volte a ser 0, nao vai ter nada, entao adicionei essa condicao
					printf("Nao ha nenhum cliente cadastrado.\n"); 
				break;
			}
			
			case 5: { //remover filme
				int id;
				printf("Digite o ID do filme a ser removido: ");
				scanf("%d", &id);
				v = removerfilme(v, id, &nfilme);
				//system("cls"); // funcao para limpar a tela(Cabivel de mudanca)
				break;
			}
			
			case 6: { //remover cliente
				char cpf[11];
				printf("Digite o CPF do cliente a ser removido: ");
				fgets(cpf, sizeof(cpf), stdin);
				setbuf(stdin, NULL);
				vCliente = removerCliente(vCliente, cpf, &ncliente); // vCliente recebe pq a funcao retorna para ele
				//system("cls"); // funcao para limpar a tela(Cabivel de mudanca)
				break;
			}
			
			case 11: 
				return(0); // fechando o sistema
	    }		      
	}   
	
	if (v == 0) {
        printf("Erro na alocacao!\n");
        return 1;
    }
	
	free(v);
	
	if(vCliente == 0) {
		printf("Erro na alocacao!\n");
		return 1;
	}
	
	free(vCliente);
	
	return 0;
}
