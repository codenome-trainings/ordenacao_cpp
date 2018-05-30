#include <stdlib.h>
#include "algoritmos_ord.h"

int menu, aux;

int teste = 0, *vetor;

float vetorFlutuante[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};


void cadastrar(int num){
	if(teste == 0){
				teste++;
				vetor = (int *) malloc (teste*sizeof(int));
				vetor[teste-1] = num;
			}else{
				teste++;
				vetor = (int *)realloc(vetor, teste*sizeof(int));
				vetor[teste-1] = num;
			}

}
int main(int argc, char** argv) {	

	do{
		cout<<"1 - Inserir Elemento\n2 - Imprimir Vetor\nEscolha o metodo de ordenacao:\n3 - Bubble Sort\n4 - Insert Sort\n5 - Quick Sort\n6 - Shell Sort\n7 - Merge Sort\n8 - Bucket Sort";
		cin>>menu;
		system("cls");
		switch(menu){
			case 1: 
			cout<<"Digite o numero para inserir no vetor: ";
			cin>>aux;
			cadastrar(aux);
			break;
			
			case 2:
			imprimir(vetor, teste);
			system("pause");
			break;
			
			case 3:
			bubble_sort(vetor, teste);
			break;
			
			case 4:
			insertionSort(vetor, teste);
			break;
			
			case 5:
			quickSort(vetor, 0, teste-1);
			break;
			
			case 6:
			shellSort(vetor, teste);
			break;
			
			case 7:
			mergeSort(vetor,0, teste-1);
			break;
			
			case 8:
			bucketSort(vetorFlutuante, 6);
			imprimir_f(vetorFlutuante, 6);
			system("pause");
			break;
		}
	}while(menu != 0);
	
	return 0;
}

