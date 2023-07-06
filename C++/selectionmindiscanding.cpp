#include <stdio.h>
#include <conio.h>
void v_minDesc(int A[5],int N);
void v_Tukar(int *P,int *M);
int main(){
int L[5];
int i,N;

//input data array
printf("Input Data Array\n");
printf("\nBanyak Data : ");scanf("%i",&N);
for(i=0;i<N;i++){ 
	printf(" Data ke-%i = ",i+1);
	scanf("%i",&L[i]); 
} //endloop i

//panggil procedure v_minDesc
v_minDesc(L,N);
//output data array
printf("\n Data Sortir:\n");
for(i=0;i<N;i++){ 
	printf(" %5i",L[i]); 
} //endloop i
printf("\n Tekan Enter...\n");
getche();
} //end main program

void v_minDesc(int A[5],int N){ 
int k,j,temp,min;

//minimum selection sort descending
for(k=(N-1);k>=1;k--){ 
min = 0;
for(j=0;j<=k;j++){ 
	if (A[j] < A[min])
		min=j; 
} //endloop j
v_Tukar(&A[k],&A[min]); 
} //endloop k
} //end procedure v_minDesc

void v_Tukar(int *P,int *M){ 
int temp;
temp = *P;
*P = *M;
*M = temp;
} //end procedure v_Tukar 
