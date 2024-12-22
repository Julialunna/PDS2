#include<iostream>
template <typename T>

class Vetor{
    private:
        T* VetorDoTipoT;
        int CapacidadeMaximaVetor;
        int NumElementos;
    public:
        Vetor(Vetor& VetorRecebido): Vetor(VetorRecebido.GetCapacidadeMaximaVetor()){
            this->CapacidadeMaximaVetor=VetorRecebido.GetCapacidadeMaximaVetor();
            for(int i=0;i<VetorRecebido.GetNumElementos();i++){
                this->VetorDoTipoT[i]=VetorRecebido.GetElemento(i);
                this->NumElementos++;
            }
        }
        Vetor(int n): CapacidadeMaximaVetor(n), NumElementos(0){
            VetorDoTipoT=new T[CapacidadeMaximaVetor];
        }

        void SetElemento(int i, T x){
            if(i<this->CapacidadeMaximaVetor){
                this->VetorDoTipoT[i]=x;
            }
        }
        T GetElemento(int i){
            return this->VetorDoTipoT[i];
        }
        void AdicionaElemento(T x){
            if(this->NumElementos<this->CapacidadeMaximaVetor){
                this->SetElemento(this->NumElementos, x);
                this->NumElementos++;
            }
        }
        void Imprime(){
            int i;
            for(i=0;i<this->NumElementos;i++){
                if(i==this->NumElementos-1){
                    std::cout<<this->GetElemento
                    (i)<<std::endl;
                }else{
                    std::cout<<this->GetElemento
                    (i)<< " "<<std::ends;
                }
            }
        }
        int GetCapacidadeMaximaVetor(){
            return this->CapacidadeMaximaVetor;
        }
        int GetNumElementos(){
            return this->NumElementos;
        }
        ~Vetor(){
            delete[] VetorDoTipoT;
        }
};