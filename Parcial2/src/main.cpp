#include <iostream>
#include <vector>
#include "../include/ClienteBancario.h"
using namespace std;

int main()
{
    vector<ClienteBancario> clientes;

    string nombre, cedula;
    float valor;
    // General cliente
    cout << "Ingrese el nombre del cliente: ";
    cin >> nombre;
    cout << "Ingrese la cedula del cliente: ";
    cin >> cedula;

    clientes.push_back(ClienteBancario(nombre, cedula));
    // Depositar
    cout << "Ingrese el valor a depositar: ";
    cin >> valor;
    clientes[0].depositar(valor);
    // Retirar
    cout << "Ingrese el valor a retirar: ";
    cin >> valor;
    if (clientes[0].retirar(valor))
    {
        cout << "Retiro exitoso" << endl;
    }
    else
    {
        cout << "Retiro fallido" << endl;
    }
    // Saldo
    cout << "Saldo actual: " << clientes[0].obtenerSaldo() << endl;
    // Promedio
    cout << "Promedio de transacciones: " << clientes[0].promedioTransacciones() << endl;
    return 0;
}
