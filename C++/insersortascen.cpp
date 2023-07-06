#include <stdio.h>
#include <conio.h>

int main(){ 
	int L[7];
 	int i,N;
 	void v_insertAsc(int A[7],int N);
 	
	 //input data array
 	printf("Input Data Array\n");
 	printf("\nBanyak Data: "); scanf("%i",&N);
 	for(i=0;i<N;i++){ 
		printf("Nilai ke-%i = ",i+1);
 		scanf("%i",&L[i]); 
	} //end loop i
 	
	//panggil procedure v_inAsc
 	v_insAsc(L,N);
 	
	 //output data array
 	printf("Data terurut:\n");
 	for(i=0;i<N;i++){ 
		printf("%5i",L[i]); 
	} //end loop i
 	printf("\nTekan Enter...\n");
 	getche();
 }

void v_insAsc(int A[7],int N){ 
	int k,X,i;
 	
	 //insertion sort ascending
 	k=1;
 	while(k<=N-1){ 
		i=k;
 		X=A[i];
 		while(i>=1 && A[i-1]>X){ 
			A[i]=A[i-1];
 			i--; 
		} //endwhile
 		A[i]=X;
 		k++; 
	} //endwhile
 } //end procedure 
