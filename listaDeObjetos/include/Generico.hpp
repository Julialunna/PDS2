class Generico{
    private:
        int id=0;
        static int contador_id;
        static int quant_objetos_generico;

    public:
        Generico();
        Generico(int id_recebido);
        ~Generico();
        int Get_id();
        static int Get_quant_objetos_generico();
        static void Set_quant_objetos_generico(int valor);
        void imprime_informacao();
};