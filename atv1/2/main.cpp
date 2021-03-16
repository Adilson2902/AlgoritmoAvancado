#include <cstdio>



void imprimeVetor(int vetor[]){

    for (int j = 0; j < 9 ; j++) {
        printf(" | %i  |",vetor[j]);
    }
  printf("\n");
}

void merge(int vetor[9],int  inicio,int meio, int fim){
   int i , j,k;
    int n1 = meio - inicio +1;
    int n2 = fim - meio;

    int vetoresq[n1] , vetordir[n2];

    for ( i = 0; i < n1 ; ++i) {
        vetoresq[i] = vetor[inicio+i] ;
    }
    for ( j = 0; j < n2 ; ++j) {
        vetordir[j] = vetor[meio+1+j] ;
    }

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j <n2){
        if(vetoresq[i] <= vetordir[j]){
            vetor[k] = vetoresq[i];
            i++;

        }else{
            vetor[k] = vetordir[j];
            j++;

        }

        k++;
    }
    while (i<n1 ){
        vetor[k] = vetoresq[i];
        i++;
        k++;
    }

    while (j<n2 ){
        vetor[k] = vetordir[j];
        j++;
        k++;
    }

}

void merge_sort(int vetor[9], int inicio, int fim){

    if(inicio < fim){
        int meio =inicio+ (fim - inicio) /2;

        merge_sort(vetor,inicio,meio);

        merge_sort(vetor,meio+1,fim);
        imprimeVetor(vetor);
        merge(vetor,inicio,meio,fim);


    }
}

int main() {

    int vetor[] = {9,8,7,6,5,4,3,2,1};
    imprimeVetor(vetor);
    merge_sort(vetor,0,9-1);
    imprimeVetor(vetor);

}
