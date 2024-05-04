#include "Alasitas.h"

Alasitas::Alasitas() : cabeza(nullptr) {
    // Inicializar la matriz con valores por defecto
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            elementos[i][j] = i * MAX_COLUMNAS + j;
        }
    }
}

void Alasitas::mostrarMatriz() {
    cout << "Matriz Alasitas:" << endl;
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            cout << elementos[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Alasitas::mostrarLista() {
    if (cabeza == nullptr) {
        cout << "La lista Alasitas está vacía." << endl << endl;
        return;
    }

    cout << "Lista Alasitas:" << endl;
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << temp->valor << " ";
        temp = temp->siguiente;
    }
    cout << endl << endl;
}

void Alasitas::ingresarElementosMatriz() {
    cout << "Ingrese los elementos de la matriz Alasitas:" << endl;
    for (int i = 0; i < MAX_FILAS; ++i) {
        for (int j = 0; j < MAX_COLUMNAS; ++j) {
            cout << "Ingrese el elemento para la posición [" << i << "][" << j << "]: ";
            cin >> elementos[i][j];
        }
    }
    cout << "Elementos de la matriz Alasitas ingresados correctamente." << endl;
}

void Alasitas::eliminarElemento(int fila, int columna) {
    if (fila < 0 || fila >= MAX_FILAS || columna < 0 || columna >= MAX_COLUMNAS) {
        cout << "Coordenadas inválidas. Por favor, ingrese coordenadas dentro de los límites de la matriz." << endl;
        return;
    }

    elementos[fila][columna] = 0; // Establecer el elemento en cero para eliminarlo
    cout << "El elemento en la posición [" << fila << "][" << columna << "] ha sido eliminado correctamente." << endl;
}
