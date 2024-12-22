template <typename T>
class Vetor{
    private:
        T* vetor_do_tipo_T;
        int capacidade_maxima_vetor;
    public:
        Vetor(int n): capacidade_maxima_vetor(n){
            vetor_do_tipo_T=new T[capacidade_maxima_vetor];
        }
        ~Vetor(){
            delete[] vetor_do_tipo_T;
        }
};