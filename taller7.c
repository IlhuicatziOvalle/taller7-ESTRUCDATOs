#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ListaDoble/ListaDoble.h"  // Asegúrate de que este archivo incluya las declaraciones necesarias

int main() {
    PQueue IMSS;
    initPQueue(&IMSS,7);

    Paciente p1 = {"Juanito", &(Lesion){70, "Pierna rota"}};
    Paciente p2 = {"Pepito", &(Lesion){80, "balazo"}};
    Paciente p3 = {"Rogelio", &(Lesion){50, "clavo en el pie"}};
    Paciente p4 = {"Eva", &(Lesion){40, "COVID"}};
    Paciente p5 = {"Rosario", &(Lesion){90, "Convulsion"}};
    Paciente p6 = {"Jesus", &(Lesion){60, "Contucion"}};
    Paciente p7 = {"Ana", &(Lesion){100, "Sobre dosis"}};

    insercionHeap(&IMSS, &p1, -1, compararSeveridad);
    insercionHeap(&IMSS, &p2, -1, compararSeveridad);
    insercionHeap(&IMSS, &p3, -1, compararSeveridad);
    insercionHeap(&IMSS, &p4, -1, compararSeveridad);
    insercionHeap(&IMSS, &p5, -1, compararSeveridad);
    insercionHeap(&IMSS, &p6, -1, compararSeveridad);
    insercionHeap(&IMSS, &p7, -1, compararSeveridad);

    // Imprimir los pacientes en el MaxHeap sin funciones adicionales
    printf("Pacientes en orden de prioridad en el heap:\n");
    for (int i = 0; i < IMSS.heap_size; i++) {
        Paciente *paciente = (Paciente *)IMSS.heap[i].valor;
        printf("Nombre: %s\n" ,paciente->nombre);
    }

    pq_pop(&IMSS,-1,compararSeveridad);
    // Imprimir los pacientes en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < IMSS.heap_size; i++) {
        Paciente *paciente = (Paciente *)IMSS.heap[i].valor;
        printf("Nombre: %s\n" ,paciente->nombre);
    }
    pq_pop(&IMSS,-1,compararSeveridad);
    
    // Imprimir los pacientes en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < IMSS.heap_size; i++) {
        Paciente *paciente = (Paciente *)IMSS.heap[i].valor;
        printf("Nombre: %s\n" ,paciente->nombre);
    }

    remover(&IMSS,)
    return 0;
}
