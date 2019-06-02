#include <stdio.h>
#include <assert.h>

float calDiscount(int, float);
void displayGift(float);
void testCalDiscount();

int main(){
	int time;
	float totAmount, discount, finalAmount;
	char gift[256];

	testCalDiscount();

	printf("Enter the time : ");
	scanf("%d" , &time);

	while(time != 16 && time != 20){
		printf("Please enter valid time [16/20] : ");
		scanf("%d",&time);
	}

	printf("Enter the amount : ");
	scanf("%f" , &totAmount);

	discount = calDiscount(time, totAmount);
	finalAmount = totAmount - discount;

	printf("Discount : %.2f\n", discount);
	displayGift(finalAmount);
	printf("Amount : %.2f\n", finalAmount);
}

float calDiscount(int time, float totAmount){
	if(time == 16){
		return totAmount * 10 / 100;
	}
	if(time == 20){
		return totAmount * 12 / 100;
	}
}


void displayGift(float finalTot){
	if(finalTot >= 7000){
		printf("Packet of Milk\n");
	}
	if(finalTot >= 5000 && finalTot < 7000){
		printf("1 Kg of Sugar\n");	
	}
	if(finalTot >= 3000 && finalTot < 5000){
		printf("Pack of 6 Eggs\n");
	}
}

void testCalDiscount(){
	assert(calDiscount(16,10000) == 1000);
	assert(calDiscount(20,10000) == 1200);
}
