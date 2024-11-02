#ifndef ONIBUS_H
#define ONIBUS_H

#include <iostream>

struct Onibus{
    std::string placa;
    int capacidade_maxima;
    int lotacao_atual;

    Onibus(std::string placa_recebida, int capacidade_maxima_recebida);

    void subir_passageiros(int quant_passageiros_a_subir);

    void descer_passageiros(int quant_passageiros_a_descer);

    void transfere_passageiros(Onibus* onibus_destino_passageiros, int quant_passageiros_a_transferir);
    
    void imprimir_estado();
    
    

};
#endif