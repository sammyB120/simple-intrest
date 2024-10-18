/*
Author:samuel mbuya
Reg No:CT102/G/23825/24
Date:17/10/2024
*/
#include<stdio.h>
float Totalbill(int unitsconsumed, float chargesperunit){
	return unitsconsumed*chargesperunit;
}
float Surcharge(float Totalbill){
	return Totalbill*0.15;
}
int main(){
	int customerID;
	int unitsconsumed;
    char customerName[15];
	float chargesperunit;
	float totalbill;
	float surcharge;


	//Enter customer details

	printf("\nEnter customerName\n:");
	scanf("%s[\n]", &customerName);

	printf("\nEnter customerID\n:");
	scanf("%d", &customerName);

	printf("\nEnter unitsconsumed\n:");
	scanf("%d", &unitsconsumed);


	// caculate charges per units based on units consumed
	if(unitsconsumed<=199){
		chargesperunit=1.20;
	}else if(unitsconsumed>=200 && unitsconsumed<=400) {
		chargesperunit=1.50;
	}else if(unitsconsumed>=400 && unitsconsumed<=600) {
		chargesperunit=1.80;
	}else{
		chargesperunit=2.00;
	}
		totalbill = Totalbill(unitsconsumed,chargesperunit);

		if(totalbill>400){
			surcharge=Surcharge(totalbill);
		totalbill+=surcharge;
		}

		if(totalbill<100){
			totalbill=100;
		}
		//print output

		printf("\ncustomers iD: %d\n",customerID);
		printf("\nunitsconsumed: %d\n",unitsconsumed);
		printf("\ncustomerName: %[^\n]",customerName);
		printf("\nchargesperunit: %.2f\n",chargesperunit);
		printf("\ntotalbill: %.2f\n",totalbill);

   return 0;
}
