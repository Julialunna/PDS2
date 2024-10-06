#include <iostream>
#include <cmath>
#include <iomanip>
#define SUCESSO 0
using namespace std;

float mediaAritmetica(float *numerosACalcular, int tamanho){
    int i=0;
    float soma=0, resultado=0;
    for(i=0;i<tamanho;i++){
        soma+=numerosACalcular[i];
    }

    resultado= soma/tamanho;
    return resultado;
}

float desvioPadrao(float *numerosACalcular, int tamanho, float media){
    float desvioPadrao=0, somaFormula=0;
    int i=0;

    for(i=0;i<tamanho;i++){
        somaFormula+=pow((numerosACalcular[i]-media),2);
    }

    desvioPadrao=sqrt(somaFormula/tamanho);
    return desvioPadrao;
}

int main(){
    int n=0, i=0;
    float media=0;
    cin >> n;

    float * numerosEntrada = new float[n];

    for(i=0;i<n;i++){
        cin >> numerosEntrada[i];
    }

    media= mediaAritmetica(numerosEntrada, n);
    cout << fixed << setprecision(4);
    cout <<media<<endl;
    cout <<desvioPadrao(numerosEntrada, n, media)<<endl;
    return SUCESSO;

}
 