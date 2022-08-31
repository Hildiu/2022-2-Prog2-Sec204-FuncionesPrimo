//
// Created by Profesor08 on 31/08/2022.
//

#include "UFunciones.h"

bool esPrimo(unsigned long int n)
{ unsigned long int divisor;

  if (n==1)
      return false;
  divisor = 2;
  while( divisor<n and n % divisor!=0)
      divisor++;
  if(divisor==n)
      return true;
  else
      return false;
}

bool esPrimo2(unsigned long int n) {
    unsigned long int divisor;
    if (n == 1)
        return false;
    for (unsigned long int divisor = 2; divisor < n; divisor++)
        if (n % divisor == 0)
            return false;
    return true;
}

unsigned long int siguientePrimo(unsigned long int  num)
{
  unsigned long int i = num + 1;

  while( !(esPrimo2(i)))
      i++;
  return i;
}


unsigned long int anteriorPrimo( unsigned long int numero)
{ unsigned long int i = numero -1;

  while(!(esPrimo2(i)))
      i--;
  return i;
}