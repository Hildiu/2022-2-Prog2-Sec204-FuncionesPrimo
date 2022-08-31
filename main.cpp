/*---------------------------------------------------------------
 * Dato de Entrada: numero (unsigned long int) numero>10
 * Dato de Salida:  sgtePrimo, anteriorPrimo (unsigned long int)
 ----------------------------------------------------------------*/

#include <iostream>
#include "UFunciones.h"
using namespace std;

int main()
{ unsigned long int numero;


  do{
      cout << "Numero [mayor a 10 ] =";
      cin >> numero;
  } while(numero<=10);
  cout << "\n";
  cout << "El Siguiente numero primo es : " << siguientePrimo(numero) << "\n";
  cout << "El anterios numero primo es  : " << anteriorPrimo(numero) << "\n";
  return 0;
}
