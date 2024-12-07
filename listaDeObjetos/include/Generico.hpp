class Generico{
    private:
        int id=0;
        static int contador_id;
        static int quant_objetos_generico;

    public:
        Generico();
        Generico(int id_recebido);
        int Get_id();
        void imprime_informacao();
};