#include "types.h"
#include "stat.h"
#include "user.h"

void fork_de_prueba(void)
{
  printf(1, "Soy el proceso Hijo.\n");
  fork();
}


int main (void)
{
  printf(1, "Hay actualmente %d procesos, gracias por consultar.\n", getpros()); // LLAMADA A SISTEMA
  printf(1, "Soy el proceso Padre.\n");
  fork_de_prueba();
  printf(1, "Este es un fork de prueba y ahora hay %d procesos.\n", getpros());
  exit();
}

