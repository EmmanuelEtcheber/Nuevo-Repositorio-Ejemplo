#include <stdio.h>
#include <stdlib.h>

#include "Estudiante.h"



Estudiante cargarEstudiante()
{
    Estudiante nuevo;
    printf("Ingrese dni estudiante: ");
    scanf("%i", &nuevo.dni);
}
void mostrarEstudiante(Estudiante nuevo)
{
    printf("Dni estudiante: %i",nuevo.dni);
}
