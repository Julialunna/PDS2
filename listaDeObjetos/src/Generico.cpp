#include "Generico.hpp"
int Generico::contador_id=0;
int Generico::quant_objetos_generico=0;
Generico::Generico(int id_recebido){
    this->id=id_recebido;
    quant_objetos_generico++;
}
Generico::Generico(){
    contador_id++;
    quant_objetos_generico++;
    this->id=contador_id;
}
int Generico::Get_id(){
    return this->id;
}
    
