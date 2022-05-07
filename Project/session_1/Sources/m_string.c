#include "..\Headers\m_string.h"
#include <stdio.h>

void NhapMang1(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void NhapMang2(int b[], int n){
    for (int i = 0; i < n; i++){
        printf("Nhap vao phan tu b[%d]: ", i);
        scanf("%d", &b[i]);
    }
}

int SoSanh(int a[] ,int b[],int n){
    for(int i=0; i<n ;i++){
        if(a[i]==b[i]){
        if(i==4)
            return 1;
        }
        else
            return 0;
    }
}