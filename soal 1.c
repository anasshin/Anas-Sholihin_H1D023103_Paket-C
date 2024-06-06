#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 4

typedef struct
{
    int count;
    int front;
    int rear;
    int item[MAXQUEUE];

} QUEUE;

QUEUE antrean;

void inisialisasi(QUEUE *Q)
{
    Q->count = 0;
    Q->front = 0;
    Q->rear = 0;
}

int isEmpty(QUEUE *Q)
{
    int hasil = 0;
    if (Q->count == 0)
    {
        hasil = 1;
    }
    return hasil;
}

int isFull(QUEUE *Q)
{
    int hasil = 0;
    if (Q->count == MAXQUEUE)
    {
        hasil = 1;
    }

    return hasil;
}

void insert(QUEUE *Q, int data)
{
    // TODO 1 //
    if (isFull(Q) == 1)
    {
        printf("Antrian Penuh\n");
    }
    else
    {
        printf("Antrian masuk: %d\n", data);
        Q->item[Q->rear] = data;
        Q->rear = (Q->rear + 1) % MAXQUEUE;
        Q->count++;
    }
}

void hapus(QUEUE *Q)
{
    // TODO 2 //
    if (isEmpty(Q) == 1)
    {
        printf("Antrian Kosong\n");
    }
    else
    {
        printf("Menghapus %d dari antrian\n", Q->item[Q->front]);
        Q->front = (Q->front + 1) % MAXQUEUE;
        Q->count--;
    }
}

void printQueue(QUEUE *Q)
{
    // TODO 3 //
    int i;
    printf("Isi antrian: ");
    for ( i = Q->front; i <= Q->count; i++)
    {
        /* code */
        printf("%d ", Q->item[i]);
    }
    printf("\n");
}

int main()
{
    inisialisasi(&antrean);

    // Insert mahasiswa pertama //
    insert(&antrean, 17);
    printQueue(&antrean);
    // Insert mahasiswa kedua //
    insert(&antrean, 45);
    printQueue(&antrean);
    // Insert mahasiswa ketiga //
    insert(&antrean, 77);
    printQueue(&antrean);
    // Hapus mahasiswa pertama //
    hapus(&antrean);
    printQueue(&antrean);
    // Insert mahasiswa keempat //
    insert(&antrean, 15);
    printQueue(&antrean);

    // contoh
    // printf("masukan xx\n");
    // insert(&abcde, yy);
    // printQueue(&12345);

    return 0;
}