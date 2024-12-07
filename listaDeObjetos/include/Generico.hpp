class Generico{
    private:
        int id;
        static int contador_id;
        static int quant_objetos_generico;

    public:
        Generico(){
            contador_id++;
            quant_objetos_generico++;
            this->id=contador_id;
        }
        Generico(int id_recebido){
            this->id=id;
            quant_objetos_generico++;
        }
};