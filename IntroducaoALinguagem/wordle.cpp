#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

#define SUCESSO 0
#define NUMERO_TENATIVAS 5
#define TAMANHO_PALAVRAS 5
using namespace std;

bool processaTentativa(string tentativa, string palavraEscolhida, string* letrasAusentesNaPalavra){
    string resultado="";
    int i=0, j=0;
    bool temNaPalavra=false;
    for(i=0;i<TAMANHO_PALAVRAS;i++){
        temNaPalavra=false;
        for(j=0;j<TAMANHO_PALAVRAS;j++){
            if(tentativa[i]!=palavraEscolhida[j]){
                continue;
            }else if(tentativa[i]==palavraEscolhida[j]&& i==j){
                resultado+=tentativa[i];
                temNaPalavra=true;
                break;
            }else if(tentativa[i]==palavraEscolhida[j]&& i!=j){
                resultado+=tolower(tentativa[i]);
                temNaPalavra=true;
                break;
            }
        }
        if(!temNaPalavra){
            resultado+="*";
            if(letrasAusentesNaPalavra->find(tentativa[i])== std::string::npos){
            (*letrasAusentesNaPalavra)+=tentativa[i];

            }
        }
    }
    cout<<resultado<<" ("<<*letrasAusentesNaPalavra<<")"<<endl;
    if(tentativa==palavraEscolhida){
        return true;
    }else{
        return false;
    }
}

int main(){
    string linhaArquivo, palavraEscolhida, tentativa, letrasAusentesNaPalavra="";
    int quantPalavras=0, i=0, indicePalavraEscolhida=0;
    bool acertou=false;

    //abre arquivo 
    ifstream palavrasArquivo("palavras.txt", fstream::in);
    if(!palavrasArquivo.is_open()){
        return 1;
    }

    //lê quantas palavras o arquivo tem e aloca espaço
    palavrasArquivo>>quantPalavras;

    palavrasArquivo.ignore(); 
    string* palavrasDisponiveis= new string[quantPalavras];

    //lê as palavras e guarda em array de string
    for(i=0;i<quantPalavras;i++){
        getline(palavrasArquivo, linhaArquivo);
        palavrasDisponiveis[i]=linhaArquivo;
    }
    //define a palavra do jogo
    cin>>indicePalavraEscolhida;
    indicePalavraEscolhida--;
    palavraEscolhida=palavrasDisponiveis[indicePalavraEscolhida];

    
    for(i=0;i<NUMERO_TENATIVAS&&acertou==false;i++){
        cin>>tentativa;
        acertou=processaTentativa(tentativa, palavraEscolhida, &letrasAusentesNaPalavra);
    }

    if(acertou){
        cout<<"GANHOU!"<<endl;
    }else{
        cout<<"PERDEU! "<<palavraEscolhida<<endl;
    }

    return SUCESSO;
}