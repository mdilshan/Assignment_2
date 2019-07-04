#include <stdio.h>

int main(){
	FILE *fp1, *fp2;
	int x, count = 0, sum = 0;
	int val;
	float avg;

	fp1 = fopen("test.txt", "r");
	fp2 = fopen("summery.txt" , "w");
	
	printf("%d" , val);
	while(fscanf(fp1, "%d" , &val) == 1){
		sum += val;
		count++;
	}
	avg = (float)sum/count;

	fprintf(fp2, "Sum : %d\n" , sum);
	fprintf(fp2, "Average : %.2f\n" , avg);

	fclose(fp1);
	fclose(fp2);
}
