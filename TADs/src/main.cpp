#include <iostream>
// lembrar de mudar na hora dos testes do Moodle
#include "../include/Onibus.hpp"
#include "../include/Empresa.hpp"

using namespace std;

int main() {
    char comando = ' ';
    Empresa* empresaCadastrada = new Empresa();
    string placa_onibus_comando;
    int resultado_busca = 0;

    do {
        cin >> comando;
        switch (comando) {
            case 'C': {
                int capacidade_maxima_onibus_comando = 0;
                cin >> placa_onibus_comando;
                cin >> capacidade_maxima_onibus_comando;

                Onibus* resultado_cadastro_de_onibus = empresaCadastrada->adicionar_onibus(placa_onibus_comando, capacidade_maxima_onibus_comando);

                if (resultado_cadastro_de_onibus == nullptr) {
                    cout << "ERRO : onibus repetido" << endl;
                } else {
                    cout << "novo onibus cadastrado" << endl;
                }
                empresaCadastrada->imprimir_estado();
                break;
            }
            case 'S': {
                int quant_passageiros_a_subir = 0;

                cin >> placa_onibus_comando;
                cin >> quant_passageiros_a_subir;

                resultado_busca = empresaCadastrada->acha_indice_onibus(placa_onibus_comando);
                if (resultado_busca != ONIBUS_NAO_FOI_ACHADO) {
                    empresaCadastrada->onibus_da_empresa[resultado_busca]->subir_passageiros(quant_passageiros_a_subir);
                } else {
                    cout << "ERRO : onibus inexistente" << endl;
                }
                empresaCadastrada->imprimir_estado();
                break;
            }
            case 'D':{
                int quant_passageiros_a_descer=0;

                cin>>placa_onibus_comando;
                cin>>quant_passageiros_a_descer;

                resultado_busca=empresaCadastrada->acha_indice_onibus(placa_onibus_comando);

                if (resultado_busca != ONIBUS_NAO_FOI_ACHADO) {
                    empresaCadastrada->onibus_da_empresa[resultado_busca]->descer_passageiros(quant_passageiros_a_descer);
                } else {
                    cout << "ERRO : onibus inexistente" << endl;
                }
                empresaCadastrada->imprimir_estado();

                break;
            }
            case 'T':{
                string onibus_a_receber_passageiros;
                int quant_pessoas_a_transferir=0;

                
            }
        }
    } while (comando != 'F');

    return 0;
}
