#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> obtenerPares(const vector<int> &vec) {
    vector<int> pares;
    const int *ptr = vec.data();

    for (size_t i = 0; i < vec.size(); i++) {
        if (*(ptr + i) % 2 == 0) {
            pares.push_back(*(ptr + i));
        }
    }
    return pares;
}

struct Producto {
    int codigo;
    string nombre;
    double precio;
    int cantidad;
};

void agregarProducto(vector<Producto> &inventario, int codigo, string nombre, double precio, int cantidad) {
    Producto p = {codigo, nombre, precio, cantidad};
    inventario.push_back(p);
}

Producto* buscarProducto(vector<Producto> &inventario, int codigo) {
    for (Producto &p : inventario) {
        if (p.codigo == codigo) {
            return &p;
        }
    }
    return nullptr;
}

double calcularValorTotal(const vector<Producto> &inventario) {
    double total = 0;
    const Producto *ptr = inventario.data();
    for (size_t i = 0; i < inventario.size(); i++) {
        total += (ptr + i)->precio * (ptr + i)->cantidad;
    }
    return total;
}

void ordenarPorPrecio(vector<Producto> &inventario) {
    sort(inventario.begin(), inventario.end(), [](const Producto &a, const Producto &b) {
        return a.precio < b.precio;
    });
}

int main() {
    vector<Producto> inventario;
    int opcion;

    do {
        cout << "\n===== MENU PRINCIPAL =====" << endl;
        cout << "1. Filtrar numeros pares de un vector" << endl;
        cout << "2. Agregar producto al inventario" << endl;
        cout << "3. Buscar producto por codigo" << endl;
        cout << "4. Calcular valor total del inventario" << endl;
        cout << "5. Ordenar productos por precio" << endl;
        cout << "6. Mostrar inventario" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                vector<int> numeros = {1, 2, 3, 4, 5, 6};
                vector<int> pares = obtenerPares(numeros);

                cout << "Numeros pares: ";
                for (int n : pares) cout << n << " ";
                cout << endl;
                break;
            }
            case 2: {
                int codigo, cantidad;
                string nombre;
                double precio;
                cout << "Ingrese codigo: "; cin >> codigo;
                cout << "Ingrese nombre: "; cin >> nombre;
                cout << "Ingrese precio: "; cin >> precio;
                cout << "Ingrese cantidad: "; cin >> cantidad;
                agregarProducto(inventario, codigo, nombre, precio, cantidad);
                cout << "Producto agregado correctamente!" << endl;
                break;
            }
            case 3: {
                int codigo;
                cout << "Ingrese codigo a buscar: "; cin >> codigo;
                Producto *p = buscarProducto(inventario, codigo);
                if (p) {
                    cout << "Encontrado: " << p->nombre << " - $" << p->precio << " x " << p->cantidad << endl;
                } else {
                    cout << "Producto no encontrado." << endl;
                }
                break;
            }
            case 4: {
                cout << "Valor total del inventario: $" << calcularValorTotal(inventario) << endl;
                break;
            }
            case 5: {
                ordenarPorPrecio(inventario);
                cout << "\nInventario ordenado por precio:" << endl;
                for (const auto &p : inventario) {
                    cout << "Codigo: " << p.codigo 
                        << " Nombre: " << p.nombre 
                        << " Precio: $" << p.precio 
                        << " Cantidad: " << p.cantidad << endl;
                }
    break;
            }
            case 6: {
                cout << "\nInventario actual:" << endl;
                for (const auto &p : inventario) {
                    cout << "Codigo: " << p.codigo 
                    << " Nombre: " << p.nombre 
                    << " Precio: $" << p.precio 
                    << " Cantidad: " << p.cantidad << endl;
                }
                break;
            }
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 0);

    return 0;
}
