#ifndef EMPRESA_H
#define EMPRESA_H
#include<iostream>
#include "Onibus.hpp" 
#define QUANT_MAX_ONIBUS 20
#define ONIBUS_NAO_FOI_ACHADO -1
struct Empresa{
    int quantidade_onibus_cadastrados;
    Onibus* onibus_da_empresa[QUANT_MAX_ONIBUS]; 

    Empresa();

    Onibus* adicionar_onibus(std::string placa_recebida, int lotacao_maxima_recebida);
    
    Onibus* busca_onibus(std::string placaRecebida);
    
    void imprimir_estado();

    int acha_indice_onibus(std::string placa_onibus_a_ser_achado);
    
};

#endif