 #include <iostream>
 #include "calculadora.h"
 /**
 * @brief Programa principal que utiliza la calculadora.
 *
 * Este programa realiza operaciones matemáticas básicas (suma, resta,
 * multiplicación y división) utilizando funciones definidas en calculadora.h.
 * Los resultados se muestran por pantalla.
 *
 * @return 0 al finalizar correctamente.
 */
 int main() {
    int x = 8, y = 2;
    std::cout << "Suma: " << sumar(x, y) << std::endl;
    std::cout << "Resta: " << restar(x, y) << std::endl;
    std::cout << "Multiplicación: " << multiplicar(x, y) << std::endl;
    std::cout << "División: " << dividir(x, y) << std::endl;
    return 0;
 }