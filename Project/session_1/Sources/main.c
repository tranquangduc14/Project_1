#include <stdio.h> 
#include "..\Headers\Calc.h"
#include "..\Headers\m_string.h"
#include "..\Headers\Convertnt.h"

int size = 20;      //Calc

int arr[]= { 6, 8, 7, 9, 14, 33, 25, 48, 98, 11, 2, 9, 1, 4, 7, 6, 5, 65, 2, 4 };   //Calc

int a[100] ;    //m_string

int b[100] ;    //m_string

int n = 5 ;     //m_string


int main(int argc, char const *argv[]){


    printf("tong = %d\n",TinhTong(arr,size ));

    printf("max = %d\n",max(arr,size));

    printf("min = %d\n",min(arr,size));

    NhapMang1(a,n);

    NhapMang2(b,n);

    printf("KQ la : %d",SoSanh(a,b,n));

    dec_to_bin(120);

    return 0;
}
