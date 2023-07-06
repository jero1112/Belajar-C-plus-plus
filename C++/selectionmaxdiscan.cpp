#include <stdio.h>
#include <conio.h>
void v_Tukar(int *P,int *M);
void v_SelDesc(int A[5],int N);
int main(){
int L[5];
int i,k,j,maks,temp,N;
printf("Banyak Data: ");scanf("%i",&N);

//input data array
printf("Input Data Array\n");
for(i=0;i<N;i++){ 
	printf("Data ke-%i = ",i+1);
	scanf("%i",&L[i]); 
} //endloop i

//panggil procedure v_SelDesc
v_SelDesc(L,N);
printf("\nOutput Data Array Terurut:\n");
for(i=0;i<N;i++){ 
	printf(" %5i",L[i]); 
} //endloop i

printf("\nTekan Enter...\n");
getche();
} //end main program

void v_SelDesc(int A[5],int N){ 
int k,maks,j,temp;

//proses sorting max descending
for(k=0;k<=(N-2);k++){ 

//cari elemen maksimum
maks=k;
for(j=(k+1);j<=(N-1);j++){ 
	if (A[j] > A[maks])
		maks=j; 
} //endfor loop j

v_Tukar(&A[k],&A[maks]);
} //endfor loop k
} //end procedure v_SelDesc

void v_Tukar(int *P,int *M){ 
int temp;
temp = *P;
*P = *M;
*M = temp;
} //end procedure v_Tukar
