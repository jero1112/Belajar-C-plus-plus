#include <stdio.h>
#include <conio.h>

void v_Bubble(int A[],int N);
int main(){ 
int L[5];
int i,N;

//proses untuk memasukkan data array
printf("Banyak data : ");scanf("%i",&N);
for(i=0;i<N;i++){ 
	printf("Data ke-%i: ",i+1);
	scanf("%i",&L[i]); 
} //end loop i

//memanggil procedure bubble sort
v_Bubble(L,N);

//proses menampilkan kembali data array
printf("\nData Array Terurut\n");
for(i=0;i<N;i++){ 
	printf("%3i",L[i]); };
	getche();
} //end main program

void v_Bubble(int A[5],int N){ 
int a,b,temp;

//proses sortir dengan bubble sort
for(a=0;a<=(N-2);a++){ 
	for(b=(N-1);b>=(a+1);b--){ 
		if (A[b-1] > A[b]){ 
			temp = A[b-1];
			A[b-1]= A[b];
			A[b] = temp; 
		} //endif
	} //end loop j
} //end loop i
} //end procedure v_Bubble
