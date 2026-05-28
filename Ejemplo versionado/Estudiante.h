#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

typedef struct
{
    int dni;
    char nombre[30];
}Estudiante;

Estudiante cargarEstudiante();
void mostrarEstudiante(Estudiante e);

#endif // ESTUDIANTE_H_INCLUDED
