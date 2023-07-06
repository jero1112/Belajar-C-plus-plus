#include<stdio.h>
float kuadrat(float);

main()
{
    float bil, hasil=0;
    printf("Masukkan bilangan :");
    scanf("%f", &bil);
    hasil = kuadrat(bil);
    printf("Hasil kuadrat : %.2f", hasil);
    printf("\n\n\n\n");
}

float kuadrat (float n)
{
    float hasil=0;
    hasil = n*n;
    return(hasil);
}

