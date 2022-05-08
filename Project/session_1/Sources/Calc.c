#include "..\Headers\Calc.h"



int TinhTong(int arr[], int size){
    int s = 0;    
    for(int i = 0; i < size; i++){
        s+= arr[i];
    }
    return s;
}

int max(int arr[], int size){
    int max = arr[0];
    for(int i; i < size; i++)
        if(max < arr[i])
            max = arr[i];
    return max;
    
}

int min(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (min > arr[i])
            min = arr[i];
    return min;
}

int ViTri(int arr[], int size, int x){
    for(int i=0;i<size;i++)
        if(a[i]==x)
            return i;
}