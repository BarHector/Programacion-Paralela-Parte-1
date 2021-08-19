#include <stdio.h>
#include "omp.h"

int main(){
    int numeroHilos;
    printf("Ingresa el numero de hilos: ");
    scanf("%i", &numeroHilos);

    int numeroProcesadores = omp_get_num_procs(); //Numero de procesadores disponibles para el dispositivo
    omp_set_num_threads(numeroHilos); //Enviando cantidad de hilos

    printf("Procsadores: %i\n", numeroProcesadores);
    printf("Hilos: %i\n", numeroHilos);
    printf("Hilos ejecutandose: %i\n", omp_get_num_threads());
    printf("****** INICIO DE LA SECCION PARALELA *****\n");

    #pragma omp parallel
    {
        int idHilo = omp_get_thread_num(); //Numero del hilo ejecutandose
        printf("idHilo: %i -> Cantidad de hilos ejecutandose: %i\n", idHilo, omp_get_num_threads());
    }

    printf("\n***** SALIENDO DE LA SECCION PARALELA *****\n");
    printf("HILOS EJECUTANDOSE: %i", omp_get_num_threads());

    return 0;
}