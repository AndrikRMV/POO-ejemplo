#include <iostream>
#include <string>

//Andrik Ruben Meneses Vital
using namespace std;

class Vehiculo {
public:
    string marca;
    string modelo;
    int precio;

    Vehiculo(string marca, string modelo, int precio) : marca(marca), modelo(modelo), precio(precio) {}

    void mostrarInformacion() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Precio: $" << precio << endl;
    }
};

class Coche : public Vehiculo {
public:
    string tipoCombustible;

    Coche(string marca, string modelo, int precio, string tipoCombustible) : Vehiculo(marca, modelo, precio), tipoCombustible(tipoCombustible) {}

    void mostrarInformacion() {
        Vehiculo::mostrarInformacion();
        cout << "Tipo de Combustible: " << tipoCombustible << endl;
    }
};

class CocheDeportivo : public Coche {
public:
    int velocidadMaxima;

    CocheDeportivo(string marca, string modelo, int precio, string tipoCombustible, int velocidadMaxima) : Coche(marca, modelo, precio, tipoCombustible), velocidadMaxima(velocidadMaxima) {}

    void mostrarInformacion() {
        Coche::mostrarInformacion();
        cout << "Velocidad Máxima: " << velocidadMaxima << " km/h" << endl;
    }
};

int main() {
    CocheDeportivo miCocheDeportivo("Ferrari", "458 Italia", 300000, "Gasolina", 330);
    miCocheDeportivo.mostrarInformacion();
    return 0;
}