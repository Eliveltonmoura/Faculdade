#include "aluno.cpp"
#include "engine.cpp"

Tester t;

void test_soma()
{
    t.open("Soma", 1);
    numeros n = {5, 6};
    t.add(soma(n) == 11);
    t.close();
}

void test_maior_numero()
{
    t.open("Maior Numero", 1);
    numeros n = {1, 2};
    t.add(maiorNumero(n) == 2);
    n.a = 4;
    n.b = 4;
    t.add(maiorNumero(n) == 4);
    n.a = 3;
    n.b = -3;
    t.add(maiorNumero(n) == 3);
    t.close();
}

void test_calculadora()
{
    t.open("Calculadora", 2);
    numeros2 n = {5, 5, '+'};
    t.add(calcular(n) == 10);
    n.operador = '-';
    t.add(calcular(n) == 0);
    n.operador = '*';
    t.add(calcular(n) == 25);
    n.operador = '/';
    t.add(calcular(n) == 1);
    t.close();
}

void test_resultados()
{
    t.open("Resultados", 1);
    resultados r = executar(10, 5);
    t.add(r.soma == 15);
    t.add(r.subtracao == 5);
    t.add(r.multiplicacao == 50);
    t.add(r.divisao == 2);
    t.close();
}

void test_media_notas()
{
    t.open("Media das Notas", 2);
    aluno a1 = {132, 5.0, 10.0, 6.0};
    aluno a2 = {133, 5.5, 10.5, 6.5};

    t.add(fabs(media(a1) - 7.0) < 1.0e-6);
    t.add(fabs(media(a2) - 7.5) < 1.0e-6);
    t.close();
}

void test_avaliar_media()
{
    t.open("Avaliar Media", 2);
    aluno a = {123, 7,8,9};
    t.add(avaliarMedia(a) == 1);
    aluno b = {123, 7,6,4};
    t.add(avaliarMedia(b) == 0);
    aluno c = {123, 1,3,4};
    t.add(avaliarMedia(c) == -1);
    t.close();
}

void test_teste_data(){
    t.open("Teste Data", 1);
    data a = {28, 1, 1990};
    data b = {28, 1, 1990};
    t.add(testeData(a, b) == true);
    b.dia = 10;
    t.add(testeData(a, b) == false);
    b.dia = 28;
    b.mes = 10;
    t.add(testeData(a, b) == false);
    b.mes = 1;
    b.ano = 1000;
    t.add(testeData(a, b) == false);
    data c = {26, 1, 1875};
    t.add(testeData(a, c) == false);
    t.close();
}

void test_mais_velho()
{
    t.open("Mais velho", 2);
    data a = {10, 2, 2000};
    data b = {11, 2, 2000};
    t.add(maisVelho(a, b) == 1);
    a.dia = 11;
    t.add(maisVelho(a, b) == 0);
    a.dia = 12;
    t.add(maisVelho(a, b) == -1);
    a.dia = 11;
    a.mes = 1;
    t.add(maisVelho(a, b) == 1);
    a.mes = 2;
    a.ano = 1999;
    t.add(maisVelho(a, b) == 1);
    b.ano = 1998;
    t.add(maisVelho(a, b) == -1);
    b.mes = 1;
    b.ano = 1999;
    t.add(maisVelho(a, b) == -1);
    t.close();
}

void test_criar_personagem()
{
	t.open("Criar Personagem", 1);
	personagem p;
	p = criarPersonagem(100, 20);
	t.add(p.vida == 100);
	t.add(p.ataque == 20);
	t.close();
}

void test_duelo()
{
	t.open("Duelo", 2);
	personagem a = {100, 20};
	personagem b = {100, 1};
	personagem c = {1000, 10};
	t.add(duelo(a, b) == 1);
	t.add(duelo(b, a) == 0);
	t.add(duelo(a, c) == 0);
	t.add(duelo(c, a) == 1);
	t.close();
}


int main()
{
    test_soma();
    test_maior_numero();
    test_calculadora();
    test_resultados();
    test_media_notas();
    test_avaliar_media();
    test_teste_data();
    test_mais_velho();
    test_criar_personagem();
    test_duelo();
    t.total();
    return 0;
}
