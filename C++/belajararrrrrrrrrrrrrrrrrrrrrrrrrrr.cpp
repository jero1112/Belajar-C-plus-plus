#include <iostream>
using namespace std;
int i,j;
int main()
{
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(i==1){
				if(j==1 || j==5){
				
					cout<<"*";
				}else
					cout<<" ";
				
				
				}	
			else if(i==2){
				if(j==1 || j==2|| j==4|| j==5){
					cout<<"*";
				}else
					cout<<" ";
				
				}
			else if(i==3){
				if(j==1 || j==3|| j==5){
					cout<<"*";
			 	
				}else
					cout<<" ";
			}
			else if(i==4){
				if(j==1 || j==5){
					cout<<"*";
				}else
					cout<<" ";
			}
		
			}
		cout<<endl;
		}
	
	}
