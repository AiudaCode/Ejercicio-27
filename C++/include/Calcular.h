#ifndef CALCULAR_H
#define CALCULAR_H


class Calcular
{
    public:
        Calcular();
        virtual ~Calcular();
        //se definen  los metodos publicos:
        float velocidad();//velocidad de tipo float
        //se definen los metodos Setters y Getters de los atributos de la clase
        void setDistancia(float n);
        float getDistancia();
        void setTiempo(float n);
        float getTiempo();
    protected:

    private://se defienen los atributos privados:
        float distancia;//distancia de tipo float
        float tiempo;//tiempo de tipo float
};

#endif // CALCULAR_H
