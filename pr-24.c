#include<stdio.h>

void main(){
	int i,j,s,k;
	
	for(i=5;i>=1;i--){
		for(s=2;s<=i;s++){
			printf(" ");
		}
		for(j=5;j>=i;j--){
			printf("%d",j);
		}
		for(k=i+1;k<=5;k++){
			printf("%d",k);
		}printf("\n");
	}
}
