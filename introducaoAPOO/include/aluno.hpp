#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <vector>

class Aluno{
    private:
        std::string nome;
        int num_matricula;
        std::vector<int> notas_do_aluno; 
    public:
        void set_nota(int nota_aluno_recebida){
            this->notas_do_aluno.push_back(nota_aluno_recebida);
        }
        void set_nome(std::string nome_recebido){
            this->nome=nome_recebido;
        }
        void set_num_matricula(int num_matricula_recebido){
            this->num_matricula=num_matricula_recebido;
        }
        std::string get_nome(){
            return this->nome;
        }
        int get_num_matricula(){
            return this->num_matricula;
        }
        std::vector<int> get_notas_aluno(){
            return this->notas_do_aluno;
        }
        void limpar_vetor(){
            this->notas_do_aluno.clear();
        }

};

#endif