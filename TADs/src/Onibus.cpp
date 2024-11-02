#include "../include/Onibus.hpp"
Onibus::Onibus(std::string placa_recebida, int capacidade_maxima_recebida){
    this->placa=placa_recebida;
    this->capacidade_maxima=capacidade_maxima_recebida;
    this->lotacao_atual=0;
}

void Onibus::subir_passageiros(int quant_passageiros_a_subir){
    if(this->lotacao_atual+quant_passageiros_a_subir>this->capacidade_maxima){
        std::cout<<"ERRO : onibus lotado"<<std::endl;
    }else{
        this->lotacao_atual=this->lotacao_atual+quant_passageiros_a_subir;
        std::cout<<"passageiros subiram com sucesso"<<std::endl;
    }
}

void Onibus::descer_passageiros(int quant_passageiros_a_descer){
    if(this->lotacao_atual-quant_passageiros_a_descer<0){
        std::cout<<"ERRO : faltam passageiros"<<std::endl;
    }else{
        this->lotacao_atual=this->lotacao_atual-quant_passageiros_a_descer;
        std::cout<<"passageiros desceram com sucesso"<<std::endl;
    }
}