#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "estructuraUno.h"
#include "estructuraDos.h"
#include "funcionesGenericas.h"
#include "menu.h"
#include "hardcode.h"
#include "validaciones.h"

int menuPrincipal()
{
    int opcion;
    opcion = getInt("=====================================================================\n"
                    "||                              MENU:                              ||\n"
                    "|| 1. Alta Pelicula                                                ||\n"
                    "||                                                                 ||\n"
                    "|| 2. Listar                                                       ||\n"
                    "||                                                                 ||\n"
                    "|| 3. Baja                                                         ||\n"
                    "||                                                                 ||\n"
                    "|| 4. Modificar                                                    ||\n"
                    "||                                                                 ||\n"
                    //"5. Baja director\n"
                    //"6. Mostrar\n"
                    "|| 5. Salir                                                        ||\n"
                    "||                                                                 ||\n"
                    "=====================================================================\n"
                    "Ingrese una opcion: ");

    while((opcion < 0 && opcion != 777) || (opcion > 5  && opcion != 777))
    {
        printf("Ingrese una opcion valida\n");
        system("pause");
        system("cls");
        opcion = getInt("=====================================================================\n"
                        "||                              MENU:                              ||\n"
                        "|| 1. Alta Pelicula                                                ||\n"
                        "||                                                                 ||\n"
                        "|| 2. Listar                                                       ||\n"
                        "||                                                                 ||\n"
                        "|| 3. Baja                                                         ||\n"
                        "||                                                                 ||\n"
                        "|| 4. Modificar                                                    ||\n"
                        "||                                                                 ||\n"
                        //"|| 5. Baja director\n"
                        //"6. Mostrar\n"
                        "|| 5. Salir                                                        ||\n"
                        "||                                                                 ||\n"
                        "=====================================================================\n"
                        "Ingrese una opcion: ");
    }
    return opcion;
}

int subMenuAltas()
{
    int opcion;
    opcion = getInt(" 1. Agregar Pelicula\n"
                    " 2. Agregar Actor\n");

    while(opcion < 0 || opcion > 2)
    {
        opcion = getInt("Por favor, ingrese una opcion valida\n"
                        " 1. Agregar Pelicula\n"
                        " 2. Agregar Actor\n");
    }
    return opcion;
}

int subMenuListar()
{
    int opcion;
    opcion = getInt(" 1. Mostrar Peliculas ordenadas por anio de estreno\n"
                    " 2. Mostrar Actores ordenados por pais de origen\n");

    while(opcion < 0 || opcion > 2)
    {
        opcion = getInt("Por favor, ingrese una opcion valida\n"
                        " 1. Mostrar Peliculas ordenadas por anio de estreno\n"
                        " 2. Mostrar Actores ordenados por pais de origen\n");
    }
    return opcion;
}

int subMenuBaja()
{
    int opcion;
    opcion = getInt(" 1. Dar de baja Pelicula\n"
                    " 2. Dar de baja Actor\n");

    while(opcion < 0 || opcion > 2)
    {
        opcion = getInt("Por favor, ingrese una opcion valida\n"
                        " 1. Dar de baja Pelicula\n"
                        " 2. Dar de baja Actor\n");
    }
    return opcion;
}

int subMenuModificar()
{
    int opcion;
    opcion = getInt(" 1. Modificar Pelicula\n"
                    " 2. Modificar Actor\n");

    while(opcion < 0 || opcion > 2)
    {
        opcion = getInt("Por favor, ingrese una opcion valida\n"
                        " 1. Modificar Pelicula\n"
                        " 2. Modificar Actor\n");
    }
    return opcion;
}
int subMenuModificarPelicula()
{
    int opcion;
    opcion = getInt(//"1. Genero\n"
                    "1. Titulo\n"
                    "2. Actor\n"
                    "3. Fecha\n"
                    "Ingrese una opcion: ");

    while(opcion < 0 || opcion > 3)
    {
        opcion = getInt("Por favor, ingrese una opcion valida\n"
                        //"1. Genero\n"
                        "1. Titulo\n"
                        "2. Actor\n"
                        "3. Fecha\n"
                        "Ingrese una opcion: ");
    }
    return opcion;
}

int subMenuModificarActor()
{
    int opcion;
    opcion = getInt("1. Nombre\n"
                    "2. Nacionalidad\n"
                    //"3. Char\n"
                    //"4. Float\n"
                    "Ingrese una opcion: ");

    while(opcion < 0 || opcion > 2)
    {
        opcion = getInt("Por favor, ingrese una opcion valida\n"
                        "1. Nombre\n"
                        "2. Nacionalidad\n"
                        //"3. Char\n"
                        //"4. Float\n"
                        "Ingrese una opcion: ");
    }
    return opcion;
}
