#include <stdio.h>

struct Details{
	int accNumber;
	char name[100];
	char type;
	int amount;
} customers[5];

int main(){
	int i = 0, j =0 , deposit = 0 , withdraw = 0 , maxDepo = 0, minWidth = 0 ;
	char maxDepositName , minWithdrawName;
	
	// Get first input data for setting initial values to the other variables
	printf("Enter Acc Number : ");
	scanf("%d" , &customers[i].accNumber);

	printf("Enter Name : ");
	scanf("%s" , &customers[i].name);

	printf("Enter Transaction Type : ");
	scanf("%*c%c" , &customers[i].type);

	printf("Enter the amount : ");
	scanf("%d" , &customers[i].amount);
	
	// Setting Initial values
	deposit += customers[i].amount;
	if(customers[i].type == 'D' || customers[i].type == 'D'){
		maxDepo = customers[i].amount;
		//for(j =0; j < sizeof(customers[i].name)/sizeof(customers[0].name); j++){
			maxDepositName = customers[i].name;	
		//}	
	}
	if(customers[i].type == 'W' || customers[i].type == 'w'){
		minWidth = customers[i].amount;
		//for(j =0; j < sizeof(customers[i].name)/sizeof(customers[0].name); j++){
			minWithdrawName = customers[i].name;	
		//}	
	}

	
	for(i = 0; i < 4; i++){
		printf("Enter Acc Number : ");
		scanf("%d" , &customers[i].accNumber);

		printf("Enter Name : ");
		scanf("%s" , &customers[i].name);

		printf("Enter Transaction Type : ");
		scanf("%*c%c" , &customers[i].type);

		printf("Enter the amount : ");
		scanf("%d" , &customers[i].amount);
		
	}
	for(i =0 ; i< 5; i++){
		if(customers[i].type == 'D' || customers[i].type == 'D' ){
			deposit += customers[i].amount;
			if(customers[i].amount > maxDepo){
				maxDepo = customers[i].amount;
				//for(j =0; j < sizeof(customers[i].name)/sizeof(customers[0].name); j++){
					maxDepositName = customers[i].name;	
				//}			
			}		
		}

		if(customers[i].type == 'W' || customers[i].type == 'w' ){
			withdraw += customers[i].amount;
			if(customers[i].amount < minWidth){
				minWidth = customers[i].amount;
				//for(j =0; j < sizeof(customers[i].name)/sizeof(customers[0].name); j++){
					minWithdrawName = customers[i].name;	
				//}		
			}
		}
					 	
	
	}
	//print output
	printf("Total Deposit Amount : %d\n" , deposit);
	printf("Total Withdrawal Amount : %d\n" , withdraw );
	printf("Name of the customer with the maximum deposit amount : %s\n" , maxDepositName);
	printf("Name of the customer with the minimum withdraw amount : %s\n" , minWithdrawName);
}
