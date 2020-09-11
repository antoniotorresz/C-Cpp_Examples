#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

//Clase Coordenada
class Coordenada {
private:
    float x, y;
public:
    Coordenada() {}

    Coordenada(float x, float y) : x(0), y(0) {}

    ~Coordenada() {}
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

    int getMId() const {
        return m_id;
    }

    void setMId(int mId) {
        m_id = mId;
    }

    //Métodos de la clase FiguraPlana
    virtual float calcularPerimetro() {}

    virtual float calcularArea() {}
};

//Clases figuras
class Cuadrado : public FiguraPlana {
//Para esta clase me basé en el texto, no en el diagrama de clases
private:
    float m_lado;
public:
    Cuadrado(float mLado) : m_lado(mLado) {}

    Coordenada calcularCentroide() {}

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

    const string &getMTipo() const {
        return m_tipo;
    }

    float getTipo{};

    float calcularPerimetro() {
        float hipotenusa = sqrt(pow(m_base, 2) + pow(m_altura, 2));
        cout << "Hipotenusa obtenida: " << hipotenusa << endl;
        return hipotenusa + m_base + m_altura;
    }

    float calcularArea() { return (m_base * m_altura) / 2; }
};

class Circunferencia : public FiguraPlana {
private:
    float m_radio;
public:
    float getMRadio() const {
        return m_radio;
    }

    void setMRadio(float mRadio) {
        m_radio = mRadio;
    }

    Circunferencia(float mRadio) : m_radio(mRadio) {}

    float calcularPerimetro() { return M_PI * (m_radio * 2); }

    float calcularArea() { return M_PI * pow(m_radio, 2); }
};

class PoligonoR : public FiguraPlana {
protected:
    float p;
private:
    int m_nlados;
    float m_longitudlado;
public:
    PoligonoR(int mNlados, float mLongitudlado) : m_nlados(mNlados), m_longitudlado(mLongitudlado) {}

    float calcularPerimetro() {
        float perimetro = m_nlados * m_longitudlado;
        p = perimetro;
        return perimetro;
    }

    float calcularArea() {
        float angulo_theta = 360 / (m_nlados * 2);
        float apotema = m_longitudlado / (2 * tan(angulo_theta));
        return apotema;
    }
};

//----------- FIN CLASES, INICIO MAIN -----------
int main() {
    cout << "Calculando areas y perimetros de figuras, usando herencia y polimorfismo" << endl;
    int opcion = 0;
    do {
        cout << "Seleccione alguna de las opciones:" << endl << "1.Cuadrado" << endl << "2.Triangulo" << endl
             << "3.Circunferencia" << endl << "4.Poligono Regular" << endl << "5.Salir de la implementacion." << endl;
        cin >> opcion;
        FiguraPlana *fp;
        switch (opcion) {
            case 1:
                float lado;
                cout << "Ingrese el valor del lado:" << endl;
                cin >> lado;
                fp = new Cuadrado(lado);
                cout << "El area del cuadrado es: " << fp->calcularArea() << "u2" << endl;
                cout << "El perimetro del cuadrado es: " << fp->calcularPerimetro() << "u" << endl;
                break;
            case 2:
                float b, a;
                cout << "Ingrese el valor de la altura:" << endl;
                cin >> a;
                cout << "Ingrese el valor de la altura:" << endl;
                cin >> a;
                fp = new Triangulo(b, a);
                cout << "El area del triangulo es: " << fp->calcularArea() << "u2" << endl;
                cout << "El perimetro del triangulo es: " << fp->calcularPerimetro() << "u" << endl;
                break;
            case 3:
                float r;
                cout << "Ingrese el valor del radio:" << endl;
                cin >> r;
                fp = new Circunferencia(r);
                cout << "El area del circulo es: " << fp->calcularArea() << "u2" << endl;
                cout << "El perimetro del circulo es: " << fp->calcularPerimetro() << "u" << endl;
                break;
            case 4:
                float n, l;
                cout << "¿Cuantos lados tiene el poligono?" << endl;
                cin >> n;
                cout << "Ingrese la longitud de cada lado" << endl;
                cin >> l;
                fp = new PoligonoR(n, l);
                cout << "El area del poligono regular es: " << fp->calcularArea() << "u2" << endl;
                cout << "El perimetro del poligono regular es: " << fp->calcularPerimetro() << "u" << endl;
                break;
            case 5:
                cout << "Adios, gracias por usar mi software." << endl;
                break;
            default:
                cout << "Opcion no  encontrada." << endl;
        }
        delete fp;
    } while (opcion != 5);
    return 0;
}

