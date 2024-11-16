#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>

const int ERRO = 1;
const int SUCESSO = 0;

using namespace std;

void transformar_letras_string_em_minusculas(string& string_arquivo){
    transform(string_arquivo.begin(), string_arquivo.end(), string_arquivo.begin(), ::tolower);
}

string detecta_palavra_entre_separadores(string& linha){
    int i=0;
    char caracter;
    string palavra="";
    for(i=0;isalnum(linha[i]);i++){
        caracter=linha[i];
        palavra+=caracter;
    }
    return palavra;
}
void imprime_map(map<string, int>& m){
    std::map<string,int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}

void adiciona_palavras_ao_map(string& linha_arquivo, map<string, int>& map_das_palavras_do_arquivo){
    string palavra = "";
    pair<std::map<string,int>::iterator,bool> iterador;
    while(linha_arquivo.length()>0){
        palavra=detecta_palavra_entre_separadores(linha_arquivo);
        if(palavra == ""){
            linha_arquivo=linha_arquivo.substr(1);
        }else{
            iterador=map_das_palavras_do_arquivo.insert({palavra, 1});
            if(!iterador.second){
                iterador.first->second++;
            }
            linha_arquivo=linha_arquivo.substr(palavra.length());
            palavra="";
        }
    }
}

int main(){
    string nome_arquivo = "";
    cin>>nome_arquivo;
    ifstream arquivo_de_entrada(nome_arquivo);

    if(!arquivo_de_entrada.is_open()){
        return ERRO;
    }

    string linha_do_arquivo="";
    map<string, int> mapa_das_palavras_do_arquivo;

    while(getline(arquivo_de_entrada, linha_do_arquivo)){
        transformar_letras_string_em_minusculas(linha_do_arquivo);
        adiciona_palavras_ao_map(linha_do_arquivo, mapa_das_palavras_do_arquivo);
    }
    imprime_map(mapa_das_palavras_do_arquivo);

    return SUCESSO;

}