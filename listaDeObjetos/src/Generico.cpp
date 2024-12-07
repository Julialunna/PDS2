#include "Generico.hpp"
#include <iostream>
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
void Generico::imprime_informacao(){
    std::cout<<this->id<<" "<<this<<std::endl;
}
int Generico::Get_quant_objetos_generico(){
    return Generico::quant_objetos_generico;
}
void Generico::Set_quant_objetos_generico(int valor){
    Generico::quant_objetos_generico= valor;
}

Generico::~Generico(){
    Generico::Set_quant_objetos_generico(Generico::Get_quant_objetos_generico()-1);
}
