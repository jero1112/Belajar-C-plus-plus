#include <stdio.h>
#include <conio.h>
void v_SelAsc(int A[],int N);
void v_Tukar(int *P,int *M);
main(){
 int L[5];
 int i,N;
 
 //input data array
 printf("Banyak Data: ");scanf("%i",&N);
 for(i=0;i<N;i++){
 	printf("Data ke-%i: ",i+1);
 	scanf("%i",&L[i]); 
} //end loop i

 	//memanggil procedure v_SelAsc
 	v_SelAsc(L,N); 

 	//menampilkan kembali data array
 	printf("\nData Terurut:\n");
 
 for(i=0;i<N;i++){
 	printf("%3i",L[i]); 
} //end loop i

 getche();
}
void v_SelAsc(int A[5],int N){ 
	int maks,k,j,temp;
	for(k=(N-1);k>=0;k--){ 
		maks=0;
 		for(j=0;j<=k;j++){ 
			if (A[j] > A[maks]){ 
			maks=j; 
			} //endif
 		} //end loop j
 		v_Tukar(&A[k],&A[maks]);
 	} //end loop k
} //end procedure v_SelAsc

void v_Tukar(int *P,int *M){ 
int temp;
 temp = *P;
 *P = *M;
 *M = temp;
} //end procedure v_Tukar
