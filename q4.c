#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("Summery.txt" , "a");
	
	size_t i;
	int empNo, attendance[7];
	char name[256];

	printf("Enter the employee number : ");
	scanf("%d" , &empNo);

	printf("Enter the name : ");
	scanf("%s" , &name);

	for(i = 0 ; i < 7 ; i++){
		printf("Enter day %d attendance" , i+1);
		scanf("%d" , &attendance[i]);	
	}	
	
	fprintf(fp,"%d \t" , empNo);
	fprintf(fp,"%-10s \t" , name);
	for(i=0; i<7; i++){
		if(i == 6){
			fprintf(fp, "%d \n" , attendance[i]);
		}else{
			fprintf(fp, "%d \t" , attendance[i]);	
		}	
	}
	
	fclose(fp);
}
