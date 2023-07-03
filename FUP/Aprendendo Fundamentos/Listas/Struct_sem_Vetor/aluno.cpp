//TITULO   Lista - Struct
//BOLSISTA Jhonata Matias

//HB
#include <iostream>
#include <cmath>
using namespace std;
//HE

/*Q Soma Q*/

/*T
Utilizando a struct abaixo, crie uma função que recebe uma struct “numeros”
e retorna a soma de a e b.
T*/

//CB
struct numeros
{
	int a;
	int b;
};

int soma(numeros n){
    return 0;
}

//CE

/*Q Maior Número Q*/

/*T
Com a mesma struct da questão anterior, crie uma função que recebe “numeros”
como argumento, e retorna o maior entre a e b.
T*/

//CB
int maiorNumero(numeros n){
    return 0;
}

/*Q Calculadora Q*/

/*T
Vamos alterar agora a struct “numeros”, ambas as variáveis a e b agora são do
tipo float e será acrescentado mais uma variável do tipo char chamada
“operador”, ela deve conter o tipo de operação que será realizada entre a e b.
Utilizando a nova struct, crie uma função que retorna o resultado da operação
realizada entre a e b, onde a operação a ser realizada é soma (‘+’), subtração
(‘-’), divisão (‘/’) ou multiplicação (‘*’), dependendo do tipo de operação
armazenada na variável “operador”.
T*/

//CB
struct numeros2
{
	float a;
	float b;
	char operador;
};

float calcular(numeros2 n){
    return 0.0;
}
//CE

/*Q Resultados Q*/

/*T
Ultilizando a struct abaixo, crie uma função que recebe como argumento dois
números do tipo float x e y, e retorna uma struct “resultados”, ela deve
armazenar em “soma” o resultado da soma de x e y, em “subtracao” o resultado
de x - y, e etc.
T*/

//CB
struct resultados
{
	float soma;
	float subtracao;
	float divisao;
	float multiplicacao;
};


resultados executar(float x, float y){
	resultados n;
	return n;
}
//CE

/*Q Média das Notas Q*/

/*T
Utilizando a struct “aluno” definida abaixo, crie uma função que calcula e
retorna a média das três notas contidas no vetor “notas”.
T*/

//CB
struct aluno
{
	int matricula;
	float notas1;
	float notas2;
	float notas3;
};

float media(aluno a){
    return 0.0;
}
//CE

/*Q Avaliar Média Q*/

/*T
Crie uma função que recebe uma struct “aluno”, calcula a média das três notas
contidas no vetor “notas”, e retornar 1 caso o aluno tenha sido aprovado
(média >= 7),  0 caso tenha que fazer AF (7 > média >= 4) e -1 caso esteja
reprovado (média < 4).
Dica: Você pode utilizar a função "media" criada na questão anteiror para
	  calcular a média dentro da nova função, dessa foram a função
	  "avaliarMedia" apenas testa o resultado.
T*/

//CB
int avaliarMedia(aluno a){
    return 0;
}

/*Q Teste de Igualdade Q*/

/*T
A partir da struct “data” definida abaixo, escreva uma função que recebe duas
datas como argumento e retorna true se forem iguais e false caso contrário.
T*/

//CB
struct data
{
	int dia;
	int mes;
	int ano;
};

bool testeData(data d1, data d2){
	return true;
}
//CE

/*Q Mais Velho Q*/

/*T
Crie uma função que recebe as datas de nascimento de duas pessoas e retorna 1
se a primeira for a mais velha, 0 se forem iguais e -1 se a segunda for a mais
velha.
Obs.: Utilize a struct data da questão anterior.
T*/

//CB
int maisVelho(data d1, data d2){
    return 0;
}

/*Q Construir Personagem Q*/

/*T
A struct "personagem" contém os atributos de um personagem em um jogo de RPG,
utilizando essa struct, crie uma função que constrói um novo personagem, ela
deve receber seus dados, inicializa-los em um novo personagem e o devolver
como retorno da função.
T*/

//CB
struct personagem
{
	int vida;
	int ataque;
};

personagem criarPersonagem(int vida, int ataque){
	personagem p;
	return p;
}
//CE

/*Q Duelo Q*/

/*T
Agora vamos criar a função "duelo", ela recebe dois personagem e faz os dois
duelar. A função deve retornar 1 se o personagem a ganhar e 0 caso contrário.
Dicas: *Utilize um laço while e enquanto os dois personagens estiverem vivos,
		ou sejá a vida dos dois for maior que 0, os dois devem continuar se
		atacando.
	   *Quando o personagem a ataca o b, a quantidade de vida que o personagem
	   	b perde é igual ao ataque de a, a mesma coisa acontece quando
	   	b ataca a.
T*/

//CB
int duelo(personagem a, personagem b){
    return 0;
}
