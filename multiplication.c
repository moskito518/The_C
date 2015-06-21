#include <stdio.h>

int main(void) {
	int x,y;
	
	for(x=1; x<=9; x++){
		for(y=1;y<=x;y++){
			printf("%d*%d=%2d ", x,y,x*y);
		}
		
		printf("\n");
	}
}