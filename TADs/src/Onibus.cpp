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

void Onibus::transfere_passageiros(Onibus* onibus_destino_passageiros, int quant_passageiros_a_transferir){
    if(quant_passageiros_a_transferir>this->lotacao_atual||quant_passageiros_a_transferir+onibus_destino_passageiros->lotacao_atual>onibus_destino_passageiros->capacidade_maxima){
        std::cout<<"ERRO : transferencia cancelada"<<std::endl;
    }else{
        onibus_destino_passageiros->lotacao_atual=onibus_destino_passageiros->lotacao_atual+quant_passageiros_a_transferir;
        this->lotacao_atual=this->lotacao_atual-quant_passageiros_a_transferir;
        std::cout<<"transferencia de passageiros efetuada"<<std::endl;
    }
}
void Onibus::imprimir_estado(){

std::cout<<this->placa<<" ("<< this->lotacao_atual<< "/"<<this->capacidade_maxima<<")"<<std::endl;
}