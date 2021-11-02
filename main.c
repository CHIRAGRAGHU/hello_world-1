#include<stdio.h>
#include<string.h>
#include "..\include\stringcomp.h"




int main()
{
    char arr1[50];
    char arr2[50];
    int n;

    printf("Enter str1: ");
    gets(arr1);
    printf("Enter str2: ");
    gets(arr2);
    printf("Enter number of bytes : ");
    scanf("%d", &n);

    int q = sgs_clib_strncmp(&arr1, &arr2, n);

    if (q == 0)
    {
        printf("Strings are equal upo n bytes \n");
    }
    else
    {
        printf("Strings are not equal \n");
    }
}