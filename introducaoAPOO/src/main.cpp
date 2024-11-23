#include <iostream>
#include "aluno.hpp"
#include <list>

int main(){
    std::string nome_entrada;
    int num_matricula_entrada, nota_aluno_entrada;
    std::list<Aluno>lista_de_alunos;
    Aluno aluno_entrada;

    while(true){
        std::cin>>nome_entrada;
        if(nome_entrada == "END"){
            break;
        }
        aluno_entrada.set_nome(nome_entrada);

        std::cin>>num_matricula_entrada;
        aluno_entrada.set_num_matricula(num_matricula_entrada);
        do{
            std::cin>>nota_aluno_entrada;
            aluno_entrada.set_nota(nota_aluno_entrada);
        }while(nota_aluno_entrada!=-1);
        lista_de_alunos.push_back(aluno_entrada);
        aluno_entrada.limpar_vetor();
    }

    
    for(auto it=lista_de_alunos.begin();it!=lista_de_alunos.end();++it){
        std::cout << "Nome: " << it->get_nome() << std::endl;
        std::cout << "Matrícula: " << it->get_num_matricula() << std::endl;
        std::cout << "Nota: " << it->get_notas_aluno()[0] << std::endl;
    }
}