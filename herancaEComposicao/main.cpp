#include <iostream>
#include <math.h>
#include <vector>
const int SUCESSO = 0;

using namespace std;

class Ponto{
    private:
        int _x, _y;
    public: 
        Ponto(int x, int y): _x(x), _y(y){}
        int Get_x(){
            return this->_x;
        }
        int Get_y(){
            return this->_y;
        }
        void Set_x(int x){
            this->_x=x;
        }
        void Set_y(int y){
            this->_y=y;
        }
};

class Figura_geometrica{
    protected:
        Ponto centro;
    public:
        Figura_geometrica(int x, int y):centro(x, y){}
        Ponto get_centro(){
            return this->centro;
        }
        virtual void Desenha(){
            cout<<this->centro.Get_x()<<" "<<this->centro.Get_y()<<ends;
        }
        virtual float Calcula_area()=0;
};

class Retangulo : public Figura_geometrica{
    private:
        float lado_1;
        float lado_2;
    public:
        Retangulo(int x, int y, float lado1, float lado2): Figura_geometrica(x,y), lado_1(lado1), lado_2(lado2){}
        void Desenha() override{
            Figura_geometrica::Desenha();
            cout<<" "<<"RETANGULO"<<endl;
        }
        float Calcula_area() override{
            return this->lado_1*this->lado_2;
        }
};

class Circulo : public Figura_geometrica{
    private:
        float raio;
    public:
        Circulo(int x, int y,float raio_recebido): Figura_geometrica(x,y), raio(raio_recebido){}
        void Desenha() override{
            Figura_geometrica::Desenha();
            cout<<" "<<"CIRCULO"<<endl;
        }
        float Calcula_area() override{
            return M_PI*pow(this->raio,2);
        }
};

class Triangulo : public Figura_geometrica{
    private:
        float base;
        float altura;
    public:
        Triangulo(int x, int y,float base_recebida, float altura_recebida): Figura_geometrica(x,y), base(base_recebida), altura(altura_recebida){}
        void Desenha() override{
            Figura_geometrica::Desenha();
            cout<<" "<<"TRIANGULO"<<endl;
        }
        float Calcula_area() override{
            return (this->base*this->altura)/2;
        }
};

int main(){
    vector<Figura_geometrica*> figuras;

    while(true){

    }
    
    return SUCESSO;
}