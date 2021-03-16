#include <cstdio>


void fatwhile(int n){
int  i, fatorial;
    fatorial = 1;

    i = 1;
    while (i <= n) {
        fatorial = fatorial * i;
        i++;


    }

    printf("while -> %d! = %d\n", n, fatorial);

}

void fatfor(int n){
    int  i, fatorial;
    fatorial = 1;

    i = 1;
    for (int j = 1; j <=n ; ++j) {


        fatorial = fatorial * i;
        i++;
    }

    printf("for -> %d! = %d\n", n, fatorial);

}

int  fatrecursivo(int n){

    if(n==0){
        return 1;
    }

    else{
        return n * fatrecursivo(n-1);
    }
}


int main() {
    int n;

    printf("Entre o valor de n (0 <= n < 13): ");
    scanf("%d", &n);


    fatwhile(n);
    fatfor(n);
   int  resultado=fatrecursivo(n);

    printf("recursivo -> %d! = %d\n", n, resultado);
    return 0;
}
