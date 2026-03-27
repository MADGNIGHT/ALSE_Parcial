#include "../include/ClienteBancario.h"
#include <iostream>
using namespace std;
ClienteBancario::ClienteBancario(string nombre, string cedula)
    : nombre(nombre), cedula(cedula), saldo(0.0)
{
    this->transacciones = vector<float>();
    this->nombre = nombre;
    this->cedula = cedula;
    this->saldo = 0.0;
}

/**
 * @brief Deposita una cantidad de dinero en la cuenta del cliente
 * @param valor Cantidad de dinero a depositar
 */
void ClienteBancario::depositar(float valor)
{
    saldo += valor;
    transacciones.push_back(valor);
}

/**
 * @brief Retira una cantidad de dinero de la cuenta del cliente
 * @param valor Cantidad de dinero a retirar
 * @return true si el retiro fue exitoso, false si no hay suficiente saldo
 */
bool ClienteBancario::retirar(float valor)
{
    if (valor <= saldo)
    {
        saldo -= valor;
        transacciones.push_back(-valor);
        return true;
    }
    else
    {
        return false;
    }
}
/**
 * @brief Obtiene el saldo actual de la cuenta del cliente
 * @return Saldo actual
 */
float ClienteBancario::obtenerSaldo() const
{
    return saldo;
}
/**
 * @brief Calcula el promedio de las transacciones realizadas por el cliente
 * @return Promedio de las transacciones, o 0 si no hay transacciones
 */
float ClienteBancario::promedioTransacciones() const
{
    if (transacciones.empty())
    {
        return 0;
    }
    float suma = 0;
    for (float t : transacciones)
    {
        suma += t;
    }
    return suma / transacciones.size();
}