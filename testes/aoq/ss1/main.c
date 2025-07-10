#include <stdio.h>

void selection_sort(int *arr, int n);

int main(){
    int arr[5] = {15, 40, 5, 50, 30};

    selection_sort(arr, 5);
    
    for(int i=0; i<5; i++){
        printf("_%d\n", arr[i]);
    }
}

void selection_sort(int *arr, int n){
    int i, j, menor, aux;

    for(i=0; i<n-1; i++){
        menor = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < menor){
                menor = j;
            }
        }
        if(menor != i)
    }
}