#include <iostream>
#include <string>
#include <sstream>
#define SUCESSO 0
using namespace std;

int main(){
    string entrada, stringSemEspaco="";
    int i, tamanhoString;
    bool ehPalindromo=true;

    //recebendo linha e a deixando sem espaço entre as palavras 
    getline(cin, entrada);
    stringstream info(entrada);
    string aux;
    while(getline(info, aux, ' ')){
        stringSemEspaco+=aux;
    }

    tamanhoString=stringSemEspaco.length();
    //looping que determina se a primeira letra é igual a última e assim por diante
    for(i=0;i<tamanhoString;i++){
        if(stringSemEspaco[i]!=stringSemEspaco[tamanhoString-i-1]){
            ehPalindromo=false;
            break;
        }
    }
    if(ehPalindromo){
        cout<<"SIM"<<endl;
    }else{
        cout<<"NAO"<<endl;
    }
   
    return SUCESSO;
}