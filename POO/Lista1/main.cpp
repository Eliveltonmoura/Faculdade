//Biblioteca
#include <iostream>
#include <string> 
 using namespace std;
 //classe usuario
class Usuario{
    // atributos privados
private: 
     string nome;
     string ocupacao;
     string email;
     string palavraChave;
     int idade;
     char sexo;  
     // atributos // metados 
public: 
    //construtor   
    Usuario( string nome, string ocupacao, string email, string palavraChave, int idade, char sx );
        
    // setes
    void setNome (string nome){
         this->nome = nome;
    }
     void setOcupacao (string ocupacao){
         this->ocupacao= ocupacao;
    }
     void setEmail (string email){
         this->email = email;
    }
     void setPalavraChave(string palavraChave){
         this->palavraChave = palavraChave;
    }
     int setIdade (int idade){
         this-> idade = idade;
    }
     char setSexo (char sexo ){
            sexo = sexo;
    }
    //getes
    string getNome (){
        return nome;
    }
    string getOcupacao (){
        return ocupacao;
    }
    string getEmail (){
        return email;
    }
    string getPalavaChave (){
        return palavraChave;
    }
    int getIdade (){
        return idade;
    }
    char getSexo (){
        return sexo;
    }
    //     chamado a fução por parametro
    void imprimir(int num);
};
 //construtor
 Usuario::Usuario( string nome, string ocupacao, string email, string palavraChave, int idade, char sx ){
        this->nome = nome;
        this->ocupacao = ocupacao;
        this->email = email;
        this->palavraChave=palavraChave;
        this ->idade = idade;
               sexo = sx;  

             
       
    }
 // fução de imprimer os resutado consutados
 void Usuario::imprimir( int num){
    int op=num;
    if (op==1){
    cout <<"-----------------------------"<<endl;
    cout <<"Ocupacao: "<< getOcupacao()<<endl;
    cout <<"None: "<< getNome() <<endl;     
    cout << "E-Mail: "<< getEmail() <<endl;
    cout <<"Palavra Chave: " <<getPalavaChave()<<endl;
    cout <<"Idade: " << getIdade() <<endl;
    cout <<"Sexo: " <<getSexo()  <<endl;
    cout <<"-----------------------------"<<endl;
    }
   else if (op==2){
   
    cout <<"Ocupacao: "<< getOcupacao()<<endl;
    cout <<"None: "<< getNome() <<endl;     
    cout << "E-Mail: "<< getEmail() <<endl;
    cout <<"Palavra Chave: " <<getPalavaChave()<<endl;
    cout <<"Idade: " << getIdade() <<endl;
    cout <<"Sexo: " <<getSexo()  <<endl;
    cout <<"-----------------------------"<<endl;
    }
   else if (op=3){
    cout <<"Ocupacao: "<< getOcupacao()<<endl;
    cout <<"None: "<< getNome() <<endl;     
    cout << "E-Mail: "<< getEmail() <<endl;
    cout <<"Palavra Chave: " <<getPalavaChave()<<endl;
    cout <<"Idade: " << getIdade() <<endl;
    cout <<"Sexo: " <<getSexo()  <<endl;
    cout <<"-----------------------------"<<endl;
    }
    
 }
 // função principal
int main (){ 
      /*      
      1.Professor 
      2.técnico
      3.Aluno      
      */

     // inicialização do objetos
    Usuario *professor = new Usuario("Bruna","Professor","bruna@gmail.com","Professor",18,'F');
    Usuario *tecnico = new Usuario("Elivelton","tecnico","velton@alu.ufc.br","Tec",25,'M');
    Usuario *aluno = new Usuario("Alicia","Estutante","alicia@gmail.com","Alu",18,'F');
             
    // chamado a fução por argumeto
     professor->imprimir(1);

    //chamado a fução por argumeto
     tecnico->imprimir(2);

    //chamado a fução por argumeto
     aluno->imprimir(3);

    system("pause");
    return 0;
}