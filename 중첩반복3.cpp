#include<stdio.h>

int main(){
	
	int i=5;
	while(i>0){
		
		int j=i;
		while(j<=5){
			
			printf("%2d",j);
			j++;
		}
		printf("\n");
		i--;
	}
	
}
