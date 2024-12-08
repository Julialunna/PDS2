const int SUCESSO = 0;

#include <iostream>
#include <list>

class Generico{
    private:
        int id=0;
        static int contador_id;
        static int quant_objetos_generico;

    public:
    Generico(int id_recebido){
        this->id=id_recebido;
        quant_objetos_generico++;
    }
    Generico(){
        contador_id++;
        quant_objetos_generico++;
        this->id=contador_id;
    }
    int Get_id(){
        return this->id;
    }
    void imprime_informacao(){
        std::cout<<this->id<<" "<<this<<std::endl;
    }
    static int Get_quant_objetos_generico(){
        return quant_objetos_generico;
    }
    static void Set_quant_objetos_generico(int valor){
        quant_objetos_generico= valor;
    }

    ~Generico(){
        Set_quant_objetos_generico(Get_quant_objetos_generico()-1);
    }
};

int Generico::contador_id=0;
int Generico::quant_objetos_generico=0;

using namespace std;

int main(){
    char comando;
    list<Generico*>lista_de_genericos;

    while(true){
        cin>>comando;
        if(comando=='E'){
            break;
        }
        switch (comando){
        case 'A':{
            lista_de_genericos.push_back(new Generico());
            lista_de_genericos.back()->imprime_informacao();}
            break;
        case 'C':{
            int id_novo_objeto;
            cin>>id_novo_objeto;

            if(id_novo_objeto<0){
                lista_de_genericos.push_front(new Generico(id_novo_objeto));
                lista_de_genericos.front()->imprime_informacao();
            }else{
                cout<<"ERRO"<<endl;
            }}
            break;
        case 'R':{
            if(lista_de_genericos.empty()){
                cout<<"ERRO"<<endl;
            }else{
                Generico* objeto_a_ser_deletado = lista_de_genericos.front();
                lista_de_genericos.pop_front();

                objeto_a_ser_deletado->imprime_informacao();
                delete objeto_a_ser_deletado;
            }}
            break;
        case 'N':{
            cout<<Generico::Get_quant_objetos_generico()<<endl;}
            break;
        case 'P':{
            int indice_objeto_a_ser_impresso=0, i=0;
            cin>>indice_objeto_a_ser_impresso;
            if(indice_objeto_a_ser_impresso<1 || indice_objeto_a_ser_impresso>Generico::Get_quant_objetos_generico()){
                cout<<"ERRO"<<endl;
            }else{
                for(auto objeto_generico:lista_de_genericos){
                    i++;
                    if(i==indice_objeto_a_ser_impresso){
                        objeto_generico->imprime_informacao();
                    }
                }
            }}
            break;
        case 'L':{
            for(auto objeto_generico:lista_de_genericos){
                objeto_generico->imprime_informacao();
            }}
            break;
        }
    }
    
    for(auto obj:lista_de_genericos){
        delete obj;
    }
    return SUCESSO;
}