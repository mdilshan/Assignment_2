#include <stdio.h>

int main(){
	char panel[4][4];
	int i,j;

	printf("Enter a value");
	scanf("%c" , &panel[0][0]);	
	
	for(i =0; i< 4; i++){
		if(j == 0){
			for(j=1; j<4; j++){
				printf("Enter a value");
				scanf("%*c%c" , &panel[i][j]);
			}
		}else{
			for(j=0; j<4; j++){
				printf("Enter a value");
				scanf("%*c%c" , &panel[i][j]);
			}
		}

	}	
	
	printf("Red LED bulb positions \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(panel[i][j] == 'R'){
				printf("[%d,%d] \t" , i , j);
			}
		}
	}
}
