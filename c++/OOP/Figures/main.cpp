#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

//Clase Coordenada
class Coordenada {
private:
    float x = 0, y = 0;

public:
    float getX() const {
        return x;
    }

    void setX(float x) {
        Coordenada::x = x;
    }

    float getY() const {
        return y;
    }

    void setY(float y) {
        Coordenada::y = y;
    }
};

//Clase figura plana
class FiguraPlana {
protected:
    float m_perimetro;
    float m_area;
    vector<Coordenada> m_cords;

public:
    int m_id;

    virtual ~FiguraPlana() {}

    //Getters y setters ámbito público
    float getMPerimetro() const {
        return m_perimetro;
    }

    void setMPerimetro(float mPerimetro) {
        m_perimetro = mPerimetro;
    }

    float getMArea() const {
        return m_area;
    }

    void setMArea(float mArea) {
        m_area = mArea;
    }

    const vector<Coordenada> &getMCords() const {
        return m_cords;
    }

    void setMCords(const vector<Coordenada> &mCords) {
        m_cords = mCords;
    }

    //Métodos de la clase FiguraPlana
    virtual float calcularPerimetro() = 0;

    virtual float calcularArea() = 0;
};

//Clases figuras
class Cuadrado : public FiguraPlana {
    //Para esta clase me basé en el texto, no en el diagrama de clases
private:
    float m_lado;

public:
    Cuadrado(float mLado) : m_lado(mLado) {}

    Coordenada calcularCentroide() {
        Coordenada c;
        return c;
    }

    void girar(int grados) { cout << "Se giro " << grados << " grados." << endl; }

    float calcularPerimetro() { return m_lado * 4; }

    float calcularArea() { return m_lado * m_lado; }
};

class Triangulo : public FiguraPlana {
private:
    string m_tipo;
    float m_base;
    float m_altura;

public:
    Triangulo(float mBase, float mAltura) : m_tipo("Rectangulo"), m_base(mBase), m_altura(mAltura) {}

    float getTipo() { return 0.0; }

    float verificarTipo() { return 0.0; }

    float calcularPerimetro() {
        float hipotenusa = sqrt(pow(m_base, 2) + pow(m_altura, 2));
        return hipotenusa + m_base + m_altura;
    }

    float calcularArea() { return (m_base * m_altura) / 2; }
};

class Circunferencia : public FiguraPlana {
private:
    float m_radio;

public:
    Circunferencia(float mRadio) : m_radio(mRadio) {}

    float getRadio() {
        return m_radio;
    }

    void setMRadio(float mRadio) {
        m_radio = mRadio;
    }

    float calcularPerimetro() { return M_PI * (m_radio * 2); }

    float calcularArea() { return M_PI * pow(m_radio, 2); }
};

class PoligonoR : public FiguraPlana {
private:
    int m_nlados;
    float m_longitudlado;

public:
    PoligonoR(int mNlados, float mLongitudlado) : m_nlados(mNlados), m_longitudlado(mLongitudlado) {}

    float calcularPerimetro() {
        return m_nlados * m_longitudlado;
    }

    float calcularArea() {
        float zeta = 360 / (m_nlados * 2);
        float apotema = m_longitudlado / (tan(zeta * M_PI / 180) * 2);
        float perimetro = m_nlados * m_longitudlado;
        return (perimetro * apotema) / 2;
    }
};

//----------- FIN CLASES, INICIO MAIN -----------
void cCuadrado();

void cTriangulo();

void cCirculo();

void cPoligonoR();

int main() {
    cout << "Calculando areas y perimetros de figuras, usando herencia y polimorfismo" << endl;
    int opcion = 0;
    do {
        cout << "Seleccione alguna de las opciones:" << endl
             << "1.Cuadrado" << endl
             << "2.Triangulo" << endl
             << "3.Circunferencia" << endl
             << "4.Poligono Regular" << endl
             << "5.Salir de la implementacion." << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cCuadrado();
                break;
            case 2:
                cTriangulo();
                break;
            case 3:
                cCirculo();
                break;
            case 4:
                cPoligonoR();
                break;
            case 5:
                cout << "Adios, gracias por usar mi software." << endl;
                break;
            default:
                cout << "Opcion no  encontrada." << endl;
                break;
        }
        cout << "----------------------------------" << endl;
    } while (opcion != 5);
    return 0;
}

void cCuadrado() {
    FiguraPlana *fp;
    float lado;
    cout << "Ingrese el valor del lado:" << endl;
    cin >> lado;
    fp = new Cuadrado(lado);
    cout << "El area del cuadrado es: " << fp->calcularArea() << "u2" << endl;
    cout << "El perimetro del cuadrado es: " << fp->calcularPerimetro() << "u" << endl;
    delete fp;
}

void cTriangulo() {
    FiguraPlana *fp;
    float b, a;
    cout << "Ingrese el valor de la base:" << endl;
    cin >> b;
    cout << "Ingrese el valor de la altura:" << endl;
    cin >> a;
    fp = new Triangulo(b, a);
    cout << "El area del triangulo es: " << fp->calcularArea() << "u2" << endl;
    cout << "El perimetro del triangulo es: " << fp->calcularPerimetro() << "u" << endl;
    delete fp;
}

void cCirculo() {
    FiguraPlana *fp;
    float r;
    cout << "Ingrese el valor del radio:" << endl;
    cin >> r;
    fp = new Circunferencia(r);
    cout << "El area del circulo es: " << fp->calcularArea() << "u2" << endl;
    cout << "El perimetro del circulo es: " << fp->calcularPerimetro() << "u" << endl;
    delete fp;
}

void cPoligonoR() {
    FiguraPlana *fp;
    float n, l;
    cout << "¿Cuantos lados tiene el poligono?" << endl;
    cin >> n;
    cout << "Ingrese la longitud de cada lado" << endl;
    cin >> l;
    fp = new PoligonoR(n, l);
    cout << "El area del poligono regular es: " << fp->calcularArea() << "u2" << endl;
    cout << "El perimetro del poligono regular es: " << fp->calcularPerimetro() << "u" << endl;
    delete fp;
}