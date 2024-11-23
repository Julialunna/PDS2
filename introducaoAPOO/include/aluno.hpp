#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

class Aluno{
    private:
        std::string nome;
        int num_matricula;
        std::vector<int> notas_do_aluno; 
    public:
        void set_nota(int nota_aluno_recebida);
        void set_nome(std::string nome_recebido);
        void set_num_matricula(int num_matricula_recebido);
        std::string get_nome();
        int get_num_matricula();
        std::vector<int> get_notas_aluno();
        void reiniciar_aluno();
        float calcular_media_das_notas();
        int achar_maior_nota();
        int achar_menor_nota();

};

#endif