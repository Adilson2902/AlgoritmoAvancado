#include <cstdio>

void  intercalar(int *array,int inicio, int meio,int fim){
    int i, j,k, array_ordenador[8];

    i = inicio;
    k = inicio;
    j = meio+1;

    while (i<= meio && j <= fim){
        if(array[i] < array[j]){
             array_ordenador[k] = array[i];
             k++;
             i++;
        }else{
            array_ordenador[k] = array[j];

            k++;
            j++;
        }
    }

    while (i<=meio){
        array_ordenador[k] = array[i];
        k++;
        i++;
    }

    for (int z = inicio; z < k; z++) {
        array[z] = array_ordenador[z];
    }

}

void merge_sort(int *array,int inicio,int fim){
    if(inicio < fim){


        int meio = (inicio + fim)/2;

        merge_sort(array,inicio,meio);

        merge_sort(array,meio+1,fim);

        intercalar(array,inicio,meio,fim);
    }





}

int main() {
   int array[] = {7,8,3,4,6,2,1,5};

    merge_sort(array,0,7);

    for (int i = 0; i <8 ; i++) {
        printf("%i \t",array[i]);
    }

}
