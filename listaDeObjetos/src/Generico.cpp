#include "Generico.hpp"
Generico::Generico(int id_recebido){
    this->id=id;
    quant_objetos_generico++;
}
Generico::Generico(){
    contador_id++;
    quant_objetos_generico++;
    this->id=contador_id;
}
    
