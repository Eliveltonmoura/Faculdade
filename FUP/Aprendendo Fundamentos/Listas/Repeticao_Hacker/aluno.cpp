//Funções Adquiridas na Lista Anterior

bool se_primo(int numero)
{
    return false;
}
float potencia(float base, int expoente)
{
    return 0.0;
}
//FIM das Funções Adquiridas na Lista Anterior



//Começo da Nova Lista Sobre Questões de Nivel Hacker


/* Média Harmônica */

/*
Escreva uma função que leia um número N, inteiro maior que zero, e retorne o
valor de H(número harmônico) segundo a série ao lado com N termos. H=(1)+(1/2)+(1/3)+(1/4)+...+(1/N).
*/
float numero_harmonico(int n)
{
    return 0.0;
}


/* Troco */

/*
Você trabalha numa lanchonete,dizendo que existe notas de 1, 2, 5, 10, 20, 50 e 100 reais.
Faça uma função que receba um valor inteiro em reais e mostre a menor combinação de notas
existente para esse valor
*/
int troco(float valor)
{
    return 0;
}

/* MDC */
/*
Calcule o MDC de dois numeros qualquer, o MDC é o Maior numero que divide os dois numeros,
ele é menor ou igual ao menor dos dois numeros
*/
int MDC(int a, int b)
{
	return 0;
}

/* Conta Digitos */
/*
Conta quantos digitos se repete em um numero.
*/
int conta_digito(int busco,int numero)
{
    return 0;
}
//AE

/* Potência de 3 */
/*
Verifique se um numero é potência de 3,exe: 27 é potencia pois 3³=27 e 12
também pois 4³=12
*/
bool se_potencia_3(int numero)
{
    return false;
}

/* Binario-Decimal */

/*
Converta de Binario para Decimal...
*/
int binario_decimal(int numero)
{
    return 0;
}


/* Decimal-Binario */
/*
Faça uma função que receba um número de base decimal e o converta
para a base 2.
*/
int decimal_binario(int numero)
{
    return 0;
}

/* Inverter Numeros */

/*
inverte os numeros do valor, tipo: 1234 seu inverso e 4321
*/
int espelho_de_numeros(int numero)
{
    return 0;
}

/* Pandigital */

/*T
 V erifica se um numero é palindrome, um numero e palindrome se eu inverso
for igual a ele,
exemplo:121 é palindrome ja que seu inverso(121) e igual a ele
T*/
bool se_palindrome(int numero)
{
    return false;
}

/* Fibonacci */

/*
Descubra o Enesimo termo  da Serie de Fibonacci sabendo que os primeiro termos
são 1,1,2,3,5 e o proximo termo é sempre a soma dos dois anteriores
*/
int fibonacci(int numero)
{
    return 0;
}

/* Fetuccine */

/*
A serie FETUCCINE é gerada apartir da seguinte forma: os dois primeiros
termos são passados como parametros e a partir dai, os termos são gerados
com a soma ou subtração dos dois termos anteriores, ou seja,
*  A de N = A de (N-1) + A de (N-2) se Impar e A de N= A de (N-1) - A de (N-2) se Par...
*/
int fetuccine(int a1, int a2, int enesimo)
{
    return 0;
}

/* Automovel */

/*
Um automovel comporta N passageiros no banco da frente M no banco de trás.
calcule o numero de alternativas distintas para lotar o automovel utilizando P pessoas,
De modo que uma dessas pessoas nunca ocupe um lugar nos bancos da frente.
exe: com 1 banco na frente e 2 atrás e 3 pessoas eu tenho 4 possibilidades
*/
int automovel(int frente, int tras, int pessoas)
{
    return 0;
}

/* Rotação-Direita */
/*
A rotação de um número inteiro consiste na transferência de um dígito de
uma extremidade deste número para a outra. A rotação à direita, ou RD, retira o
dígito mais a esquerda e o coloca mais a direita. Por exemplo, RD(1234) = 2341.
*/
int RD(int numero)
{
	return 0;
}

/* Rotação-Esquerda */

/*
A rotação à esquerda, ou RE, retira o dígito mais a direita e o coloca mais à
esquerda. Por exemplo, RE(1234) = 4123.
*/
int RE(int numero)
{
    return 0;
}

/* Permutação */

/*
Verifique se um numero é permutação de outro, um numero é permutação de outro caso todos seus
algarismos sejam os mesmos do outro indenpendente da ordem, ex:1234 é de 4321 e 1234 é de 3241
*/
bool permutacao(int a, int b)
{
	return false;
}

/* Rotação com Criptografia */

/*
Crie um programa que Rotacione todos os algarismos de um numero N vezes em relação
a seguencia normal de numeros, caso o numero seja 2 e seja feita duas rotações,
então a saida será 4 pois 2+(2="numero de rotações")==4 e também 1234 para rotacionar
2 vezes seriam então 3456, peste atenção nos 9 que voltaram pro inicio,9+(2)==1
*/
int rotaciona_crip(int numero, int chave)
{
    return false;
}
