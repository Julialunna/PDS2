const int SUCESSO = 0;
#include "Generico.hpp"
#include <iostream>
#include <list>

using namespace std;

int main(){
    char comando;
    list<Generico>lista_de_genericos;

    while(true){
        cin>>comando;
        if(comando=='E'){
            break;
        }
        switch (comando){
        case 'A':
            lista_de_genericos.push_back(Generico());
            cout<<lista_de_genericos.back().Get_id()<<" "<<&lista_de_genericos.back()<<endl;
            break;
        case 'C':
            int id_novo_objeto;
            cin>>id_novo_objeto;
            if(id_novo_objeto<0){
                lista_de_genericos.push_front(Generico(id_novo_objeto));
                cout<<lista_de_genericos.front().Get_id()<<" "<<&lista_de_genericos.back()<<endl;
            }else{
                cout<<"ERRO"<<endl;
            }
        }
    }
        for(auto &obj:lista_de_genericos){
            cout<<obj.Get_id()<<endl;
            cout<<&obj<<endl;
        }
    return SUCESSO;
}