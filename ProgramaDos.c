#include <stdio.h>
#include <omp.h>

void secuencial();
void paralela();

int main(){
    printf("********** VERSION SECUENCIAL **********\n");
    secuencial();
    
    printf("\n********** VERSION PARALELA **********\n");
	paralela();

	return 0;
}

void secuencial(){
    int i;
    printf("Hola mundo\n");

    for(i = 0; i< 10; i++){
        printf("Iteracion: %i\n", i);
    }
	
	printf("Adios\n");
}

void paralela(){
    int i; //Puede ir dentro o fuera de 'pragma', si se coloca dentro, hay que quitar 'private'

	#pragma omp parallel private(i) num_threads(2)
	{
        //private: Se crean copias 'n' cantidad de copias de las variables dentro del parentesis
        //para cada hilo que se utilizara, se destruyen al final de la región paralela. 

        //num_threads: cantidad de hilos que se van a utilizar

		//int i;
		printf("Hola mundo\n");

		#pragma omp for
		for(i = 0; i< 10; i++){
			printf("Iteracion: %i\n", i);
		}
	}
	printf("Adios\n");
}