#ifndef Calculadora_h
#define Calculadora_h

class Calculadora{
private:
    double valor1, valor2;

public:
    Calculadora();
    Calculadora(double valor1,double valor2);
    ~Calculadora();
    double Suma();
    double Resta();
    double Multiplicacion();
    double Division();
    int Modulo();
    void setValor1(double valor1);
    void setValor2(double valor2);
    double getValor1();
    double getValor2();
};
#endif // Calculadora_h
