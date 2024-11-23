#include <iostream>
#include "aluno.hpp"
#include <vector>
#include <algorithm>
#include <iomanip>

#define SUCESSO 0

struct CompararPorNome {
    bool operator()(Aluno& a, Aluno& b){
        return a.get_nome() < b.get_nome(); 
    }
};

int main(){
    std::string nome_entrada;
    int num_matricula_entrada, nota_aluno_entrada;
    std::vector<Aluno>vector_de_alunos;
    Aluno aluno_entrada;

    while(true){
        std::cin>>nome_entrada;
        if(nome_entrada == "END"){
            break;
        }
        aluno_entrada.set_nome(nome_entrada);

        std::cin>>num_matricula_entrada;
        aluno_entrada.set_num_matricula(num_matricula_entrada);

        while(true){
            std::cin>>nota_aluno_entrada;
            if(nota_aluno_entrada==-1){
                break;
            }
            aluno_entrada.set_nota(nota_aluno_entrada);

        }
        
        vector_de_alunos.push_back(aluno_entrada);
        aluno_entrada.reiniciar_aluno();
    }

    std::sort(vector_de_alunos.begin(), vector_de_alunos.end(), CompararPorNome());

    int i;
    for(auto it=vector_de_alunos.begin();it!=vector_de_alunos.end();++it){
        std::cout << it->get_num_matricula() <<" " << std::ends;
        std::cout << it->get_nome() <<" "<< std::ends;
        for(i=0;i<it->get_notas_aluno().size();++i){
            std::cout << it->get_notas_aluno()[i] <<" "<< std::ends;
        }
        std::cout<<std::endl;

        std::cout << std::fixed << std::setprecision(2);
        std::cout <<it->calcular_media_das_notas() <<" "<< it->achar_maior_nota()<<" "<<it->achar_menor_nota()<<std::endl;
    }
    return SUCESSO;
}

