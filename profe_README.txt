// Escrito en formato C porque asi se entiende mejor (al menos nosotros si)

Funcion tarea 1 -> getpros();
{
  Obtiene todos los procesos, hace un fork y saca nuevamente los procesos, mostrando un incremento del numero de procesos;
}

Funcion tarea 2 -> Lottery Scheduler(); { -> dificil de ver; }

Funcion tarea 3 -> statP();
{
  Obtiene numero de proceso, estado, memoria virtual en hexadecimal, size del proceso y memoria fisica en hexadecimal;
}


Archivos modificados()
{
  sysproc.c;
  defs.h;
  proc.c;
  usys.S;
  user.h;
  syscall.c;
  syscall.h;
  makefile.mk;
}
Archivos agregados()
{
  getpros.c;
  statP.c;
  rand.c;
  rand.h;
}
