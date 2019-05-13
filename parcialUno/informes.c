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
#include "informes.h"

void peliculaMasNueva (sPeliculas* arrayPeliculas, int cantidadPeliculas)
{
    int i;
    int j;
    int masNueva = 0;

    printf("La/s pelicula/s mas nueva/s es/son: \n");
    for(i=0; i<cantidadPeliculas; i++)
    {
        if(arrayPeliculas[i].anio > masNueva && arrayPeliculas[i].datoOcupado == OCUPADO)
        {
            masNueva=arrayPeliculas[i].anio;
        }

    }
    for(j=0; j<cantidadPeliculas; j++)
    {
        if(arrayPeliculas[j].anio == masNueva)
        {
            printf(" %25s | %4d  \n",  arrayPeliculas[j].titulo, arrayPeliculas[j].anio);
        }
    }
}

void peliculaMasVieja (sPeliculas* arrayPeliculas, int cantidadPeliculas)
{
    int i;
    int j;
    int masVieja = 2020;

    printf("La/s pelicula/s mas vieja/s es/son: \n");
    for(i=0; i<cantidadPeliculas; i++)
    {
        if(arrayPeliculas[i].anio < masVieja && arrayPeliculas[i].datoOcupado == OCUPADO)
        {
            masVieja=arrayPeliculas[i].anio;
        }

    }
    for(j=0; j<cantidadPeliculas; j++)
    {
        if(arrayPeliculas[j].anio == masVieja)
        {
            printf(" %25s | %4d  \n", arrayPeliculas[j].titulo, arrayPeliculas[j].anio);
        }
    }
}


void peliculasEstrenadasEnDeterminadoMes (sPeliculas* arrayPeliculas, int cantidadPeliculas)
{
    int i;
    int mes = getValidInt("Ingrese el mes que desea buscar: ", "Ingrese datos validos", 0,12);
    int contador = 0;

    printf("Las peliculas estrenadas en este mes son: \n");

    for(i=0; i<cantidadPeliculas; i++)
    {
        if(arrayPeliculas[i].mes == mes  && arrayPeliculas[i].datoOcupado == OCUPADO)
        {
            printf(" %25s  | %2d  \n", arrayPeliculas[i].titulo, arrayPeliculas[i].mes);
            contador++;
        }
    }

    if(contador == 0)
    {
        printf("No se estrenaron peliculas en este mes.\n");
    }
}

void masPeliculasPorGenero (sPeliculas* arrayPeliculas, int cantidadPeliculas, sGeneros* arrayGeneros, int cantidadGeneros)
{
    int i;
    int j;
    int acumuladorGeneroMaximo = 0;
    int acumuladorGenero;
    char relacionGenero[24];

    for(i=0; i<cantidadPeliculas; i++)
    {
        acumuladorGenero = 0;
        for(j=0; j<cantidadGeneros; j++)
        {
            if(arrayPeliculas[i].genero == arrayGeneros[j].id && arrayPeliculas[i].datoOcupado == OCUPADO && arrayGeneros[j].datoOcupado == OCUPADO)
            {
                acumuladorGenero++;
            }

            if(acumuladorGenero>acumuladorGeneroMaximo)
            {
                acumuladorGeneroMaximo = acumuladorGenero;
            }
        }
    }

    for(i=0; i<cantidadPeliculas; i++)
    {
        acumuladorGenero = 0;
        for(j=0; j<cantidadGeneros; j++)
        {
            if(arrayPeliculas[i].genero == arrayGeneros[j].id && arrayPeliculas[i].datoOcupado == OCUPADO && arrayGeneros[j].datoOcupado == OCUPADO)
            {
                acumuladorGenero++;
            }

            if(acumuladorGenero == acumuladorGeneroMaximo)
            {
                if(arrayPeliculas[i].genero == arrayGeneros[j].id && arrayPeliculas[i].datoOcupado == OCUPADO && arrayGeneros[j].datoOcupado == OCUPADO)
                {
                    strcpy(relacionGenero,arrayGeneros[j].genero);
                }

            }
        }
    }
    printf("El genero con mas peliculas es %s.\n", relacionGenero);


}

void menosPeliculasPorGenero (sPeliculas* arrayPeliculas, int cantidadPeliculas, sGeneros* arrayGeneros, int cantidadGeneros)
{
    int i;
    int j;
    int acumuladorGeneroMinimo = LIMITE;
    int acumuladorGenero;
    char relacionGeneroMenor[24];

    for(i=0; i<cantidadPeliculas; i++)
    {
        acumuladorGenero = 0;
        for(j=0; j<cantidadGeneros; j++)
        {
            if(arrayPeliculas[i].genero == arrayGeneros[j].id && arrayPeliculas[i].datoOcupado == OCUPADO && arrayGeneros[j].datoOcupado == OCUPADO)
            {
                acumuladorGenero++;
            }
        }
        if(acumuladorGenero<=acumuladorGeneroMinimo)
        {
            acumuladorGeneroMinimo = acumuladorGenero;
        }
    }
    for(i=0; i<cantidadPeliculas; i++)
    {
        acumuladorGenero = 0;
        for(j=0; j<cantidadGeneros; j++)
        {
            if(arrayPeliculas[i].genero == arrayGeneros[j].id && arrayPeliculas[i].datoOcupado == OCUPADO && arrayGeneros[j].datoOcupado == OCUPADO)
            {
                acumuladorGenero++;
            }
        }

        if(acumuladorGenero == acumuladorGeneroMinimo && arrayPeliculas[i].genero == arrayGeneros[j].id && arrayPeliculas[i].datoOcupado == OCUPADO && arrayGeneros[j].datoOcupado == OCUPADO)
        {
                strcpy(relacionGeneroMenor,arrayGeneros[j].genero);
        }
    }
    printf("El genero con menos peliculas tiene %d peliculas y es %s \n", acumuladorGeneroMinimo,relacionGeneroMenor);
}

