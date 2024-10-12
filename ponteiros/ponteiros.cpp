#include <iostream>
// 0) Crie uma função que receba três variveis inteiras como parâmetro, da seguinte forma:
//    - A primeira deve ser passada por valor
//    - A segunda deve ser passada por referência 
//    - A terceira deve ser passada "por referência" usando apontadores (passagem "por referência" disponível em C)
//    A função deverá somar 1 ao valor de cada uma das 3 variáveis e retornar.
using namespace std;

void somaUm(int var1, int &var2, int *var3){
    var1++;
    var2++;
    *var3=*var3+1;
}

int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int valorEntrada=0;
    cin>>valorEntrada;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *ptrInteiro = nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    int tamanhoVetorInteiros=0, i=0;
    cin>>tamanhoVetorInteiros;
    int *vetorInteiros = new int[tamanhoVetorInteiros];
    for(i=0;i<tamanhoVetorInteiros;i++){
        cin>>vetorInteiros[i];
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout<<&valorEntrada<<endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    cout<<valorEntrada<<endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout<<&ptrInteiro<<endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    cout<<ptrInteiro<<endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout<<&vetorInteiros<<endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout<<vetorInteiros<<endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout<<*vetorInteiros<<endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptrInteiro=&valorEntrada;

    // 12) Imprima o VALOR da variável declarada em (2)
    cout<<ptrInteiro<<endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*ptrInteiro<<endl;

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ptrInteiro=5;

    // 15) Imprima o VALOR da variável declarada em (1)
    cout<<valorEntrada<<endl;

    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    ptrInteiro=vetorInteiros;

    // 17) Imprima o VALOR da variável declarada em (2)
    cout<<ptrInteiro<<endl;

    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*ptrInteiro<<endl;

    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ptrInteiro=&vetorInteiros[0];

    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    if(ptrInteiro==vetorInteiros){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }


    // 21) Imprima o VALOR da variável declarada em (2)
    cout<<ptrInteiro<<endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*ptrInteiro<<endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(i=0;i<tamanhoVetorInteiros;i++){
        ptrInteiro[i]*=10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(i=0;i<tamanhoVetorInteiros;i++){
        if(i==tamanhoVetorInteiros-1){
            cout<<vetorInteiros[i];
            
        }else{
            cout<<vetorInteiros[i]<<" ";
            
        }
    }
    cout<<endl;

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
     for(i=0;i<tamanhoVetorInteiros;i++){
        if(i==tamanhoVetorInteiros-1){
            cout<<*(vetorInteiros+i);
        }else{
            cout<<*(vetorInteiros+i)<<" ";
        }
    }
    cout<<endl;
    

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (2)
    for(i=0;i<tamanhoVetorInteiros;i++){
        if(i==tamanhoVetorInteiros-1){
            cout<<*(ptrInteiro+i);
        }else{
            cout<<*(ptrInteiro+i)<<" ";
        }
    }
    cout<<endl;
    

    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    ptrInteiro=vetorInteiros+tamanhoVetorInteiros-1;
    

    // 28) Imprima o VALOR da variável declarada em (2)
    cout<<ptrInteiro<<endl;

    

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*(ptrInteiro)<<endl;

    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **ptrPtrInteiro=&ptrInteiro;
    

    // 31) Imprima o VALOR da variável declarada em (30)
    cout<<ptrPtrInteiro<<endl;
    

    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    cout<<&ptrPtrInteiro<<endl;
    

    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    cout<<*(ptrPtrInteiro)<<endl;
    

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    cout<<**(ptrPtrInteiro)<<endl;
    

    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int var1=0,var2=0,var3=0;
    cin>>var1;
    cin>>var2;
    cin>>var3;

    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro.
    somaUm(var1, var2, &var3);

    
    // 37) Imprima o valor das 3 variáveis criadas em (35)
    cout<<var1<<" "<<var2<<" "<<var3<<endl; 
    delete[]vetorInteiros;   
    
    return 0;
}