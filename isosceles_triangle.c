#include <stdio.h>

int main(void){
	int i,j,k;
	
	for(i=0;i<6;i++){
		for(j=0;j<6-i;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}