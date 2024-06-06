#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int arr[6] ={};


int main()
{
// meminta input pada user untuk dimasukkan ke array
    for (int i = 0; i < MAX; i++)
    {
        printf("Masukkan uang ke- %d: ", i+1);
        scanf("%d", &arr[i]);
    }

// mengurutkan angka yang diinputkan
    for (int i = 0; i < MAX; i++)
    {
        for (int j = i+1; j < MAX; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

// menampilkan array yang telah diurutkan
    printf("uang yang telah diurutkan: ");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}