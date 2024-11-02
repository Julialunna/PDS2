//mudar quando mandar no moodlle
#include "../include/Empresa.hpp"


Empresa::Empresa(){
    int i=0;
    this->quantidade_onibus_cadastrados=0;
    for(i=0;i<QUANT_MAX_ONIBUS;i++){
        this->onibus_da_empresa[i]=nullptr;
    }
}
Onibus* Empresa::adicionar_onibus(std::string placa_recebida, int lotacao_maxima_recebida){
    int i=0;

    for(i=0;i<this->quantidade_onibus_cadastrados;i++){
        if(placa_recebida==this->onibus_da_empresa[i]->placa){
            return nullptr;
        }
    }

    this->onibus_da_empresa[this->quantidade_onibus_cadastrados]= new Onibus(placa_recebida, lotacao_maxima_recebida);

    this->quantidade_onibus_cadastrados++;

    return this->onibus_da_empresa[this->quantidade_onibus_cadastrados-1];
}

void Empresa::imprimir_estado(){
    int i=0;
    for(i=0;i<this->quantidade_onibus_cadastrados;i++){
        this->onibus_da_empresa[i]->imprimir_estado();
    }
}

int Empresa::acha_indice_onibus(std::string placa_onibus_a_ser_achado){
    int i=0;
    for(i=0;i<this->quantidade_onibus_cadastrados;i++){
        if(this->onibus_da_empresa[i]->placa==placa_onibus_a_ser_achado){
            return i;
        }
    }
    return ONIBUS_NAO_FOI_ACHADO;
}

