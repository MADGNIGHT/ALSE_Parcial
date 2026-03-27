#ifndef CLIENTE_BANCARIO_H
#define CLIENTE_BANCARIO_H

#include <string>
#include <vector>

/**
 * @brief Clase que representa un cliente bancario
 */
class ClienteBancario
{
private:
    std::string nombre;
    std::string cedula;
    std::vector<float> transacciones;
    float saldo;

public:
    ClienteBancario(std::string nombre, std::string cedula);

    void depositar(float valor);
    bool retirar(float valor);

    float obtenerSaldo() const;
    float promedioTransacciones() const;
};

#endif