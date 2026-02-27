#include <iostream>
using namespace std;

struct Point
{
    double x;
    double y;
};

Point calcularCentroide(Point puntos[], int n)
{
    double val_x = 0.0;
    double val_y = 0.0;

    for (int i = 0; i < n; i++)
    {
        Point position = puntos[i];
        val_x = position.x + val_x;
        val_y = position.y + val_y;
    }

    Point resultado;
    resultado.x = val_x / n;
    resultado.y = val_y / n;

    return resultado;
}

int main()
{
    int n;
    bool flag = true;
    while (flag == true)
    {
        cout << "Ingrese el numero de puntos a calcular; ";
        cin >> n;

        if (n <= 0)
        {
            cout << "El numero ingresado es menor o igual a 0" << endl;
        }
        else
        {
            flag = false;
        }
    }
    Point puntos[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el punto " << i + 1 << endl;
        cout << "Cordenada x: ";
        cin >> puntos[i].x;
        cout << "Cordenada y: ";
        cin >> puntos[i].y;
    }

    Point centroide = calcularCentroide(puntos, n);
    cout << "El centroide de los puntos ingresados es: (" << centroide.x << "," << centroide.y << ")" << endl;
    return 0;
}