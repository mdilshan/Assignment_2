#include <stdio.h>

struct Courses{
	int fee;
	char type;
} course[5];

int getSummery(int, int);
int saveData(char , int);
int checkError(char ,int);

int main(){
	int i = 0 ,total;
	char flag, shouldExit;

	printf("Enter the course type \n");
	scanf("%c" , &flag);

	if(shouldExit == 'Y' || shouldExit == 'y'){
		
	}	

	checkError(flag, 0);
	saveData(flag, i);

	for(i = 0; i < 4; i++){
		printf("Enter the course type \n");
		scanf("%*c%c" , &flag);
		
		checkError(flag, i);
		saveData(flag, i);
	}

	getSummery(i, total);
}


//================================================ FUNCTIONS =====================================

int getSummery(int i, int total){
	//calculate summery
	for(i=0; i<sizeof(course)/sizeof(course[0]); i++){
		total += course[i].fee;
	}

	printf("Total Income : %d \n" , total);
	printf("Total Students : %d \n" , i);
	return 0;
}

int saveData(char flag, int i){
	if(flag == 'H' || flag == 'h'){
		course[i].type = 'H';
		course[i].fee = 1500;	
	}
	if(flag == 'M' || flag == 'm'){
		course[i].type = 'M';
		course[i].fee = 2000;		
	}
	if(flag == 'F' || flag == 'f'){
		course[i].type = 'F';
		course[i].fee = 2500;
	}
}

int checkError(char flag ,int i){
	if(flag != 'H' && flag != 'M' && flag != 'F' && flag != 'h' && flag != 'm' && flag != 'f'){
		printf("Please enter valid value \n");
		scanf("%*c%c" , &flag);

		while(flag != 'H' && flag != 'M' && flag != 'F' && flag != 'h' && flag != 'm' && flag != 'f'){
			printf("Please enter valid value \n");
			scanf("%*c%c" , &flag);
		}
		if(i){
			i--;
		}
	}	
}

