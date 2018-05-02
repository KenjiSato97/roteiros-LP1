#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();
        char getNome();
        void setNome(char);
        void calcularArea();

    protected:
        char nome;

    private:
};

#endif // FIGURAGEOMETRICA_H
