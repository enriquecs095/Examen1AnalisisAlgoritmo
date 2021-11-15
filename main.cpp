#include <iostream>
#include "mergesort.h"
#include "hanoi.h"
#include "fibonacci.h"
#include <ctime>

using namespace std;


int main(){
    int list1 []={8,4,11,20,2,15,13,98,5,1,28,120,99};
    int list_size = sizeof(list1) / sizeof(int);
    int option=0;
    mergesort merge;
    hanoi hanoi;
    fibonacci fibonacci;
    clock_t startMergeSort;
    clock_t startHanoi;
    clock_t startFibonacci;
    int numberofDisks=25;
    int fibonacciNumber=45;
    int resultFibonacci=0;
    while(true){
    cout<<"Algoritmos"<<endl;
    cout<<"1. Merge Sort"<<endl;
    cout<<"2. Hanoi"<<endl;
    cout<<"3. Fibonacci"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>option;
    switch(option){

        case 1:
                cout<<"Merge Sort:"<<endl;
                cout<<"Arreglo desordenado:"<<endl;
                merge.printList(list1,list_size);
                cout<<"Tamaño: "<<list_size<<endl;
                startMergeSort = (int)clock();
                merge.mergeSort(list1, 0, list_size - 1);
                printf("Tiempo de ordenacion: %0.5f segundos", (float)(clock() - startMergeSort) / CLOCKS_PER_SEC);
                cout<<endl;
                cout<<"Arreglo ordenado:"<<endl;
                merge.printList(list1,list_size);
        break;

        case 2:
                cout<<"Hanoi:"<<endl;
                cout<<"Numero de discos: "<<numberofDisks<<endl;
                startHanoi = (int)clock();
                hanoi.hanoiSort(numberofDisks,'A','B','C');
                printf("Tiempo Hanoi: %0.5f segundos", (float)(clock() - startHanoi) / CLOCKS_PER_SEC);
                cout<<endl;
        break;
        
        case 3:
                cout<<"Fibonacci:"<<endl;
                cout<<"Numero fibonacci: "<<fibonacciNumber<<endl;
                startFibonacci = (int)clock();
                resultFibonacci=fibonacci.fibonacciGenerate(fibonacciNumber);
                printf("Tiempo Fibonacci: %0.5f segundos", (float)(clock() - startFibonacci) / CLOCKS_PER_SEC);
                cout<<endl;
                cout<<"Resultado fibonacci: "<<resultFibonacci<<endl;
        break;

        case 4:
            return 0;
        break;
    }
    
    }

}

