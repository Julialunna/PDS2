#include "aluno.hpp"
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
void Aluno::set_nota(int nota_aluno_recebida)
{
    this->notas_do_aluno.push_back(nota_aluno_recebida);
}
void Aluno::set_nome(std::string nome_recebido)
{
    this->nome = nome_recebido;
}
void Aluno::set_num_matricula(int num_matricula_recebido)
{
    this->num_matricula = num_matricula_recebido;
}
std::string Aluno::get_nome()
{
    return this->nome;
}
int Aluno::get_num_matricula()
{
    return this->num_matricula;
}
std::vector<int> Aluno::get_notas_aluno()
{
    return this->notas_do_aluno;
}
void Aluno::reiniciar_aluno()
{
    this->nome = "";
    this->num_matricula = 0;
    this->notas_do_aluno.clear();
}
float Aluno::calcular_media_das_notas()
{
    float soma = std::accumulate(this->notas_do_aluno.begin(), this->notas_do_aluno.end(), 0.00);
    int quant_notas = this->notas_do_aluno.size();
    return soma / quant_notas;
}

int Aluno::achar_maior_nota()
{
    auto it = std::max_element(this->notas_do_aluno.begin(), this->notas_do_aluno.end());
    return *it;
}
int Aluno::achar_menor_nota()
{
    auto it = std::min_element(this->notas_do_aluno.begin(), this->notas_do_aluno.end());
    return *it;
}
