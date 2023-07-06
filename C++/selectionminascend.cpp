#include <stdio.h>
#include <conio.h>
void v_minAsc(int A[5],int N);
void v_Tukar(int *P,int *M);
int main(){
int L[5];
int i,j,k,min,temp,N;

//input data array
printf("Input Data Array\n");
printf("\nBanyak Data : "); scanf("%i",&N);

for(i=0;i<N;i++){ 
	printf(" Data ke-%i = ",i+1);
	scanf("%i",&L[i]); 
} //end loop i

//panggil procedure v_minAsc
v_minAsc(L,N);

//output data array
printf("\n Data Sortir:\n");
for(i=0;i<N;i++){ 
	printf(" %5i",L[i]); 
} //end loop i
printf("\n Tekan Enter\n");
getche();
} //end main program

void v_minAsc(int A[5],int N){ 
int k,min,j,temp;

//proses minimum ascending selection sort
for(k=0;k<=(N-2);k++){ 
min = k;
for(j=(k+1);j<=(N-1);j++){ 
	if (A[j] < A[min])
		min = j; 
	} //endloop j
v_Tukar(&A[k],&A[min]); 
} //end loop k
} //end procedure

void v_Tukar(int *P,int *M)
{ int temp;
temp = *P;
*P = *M;
*M = temp;
} //end procedure v_Tukar 
