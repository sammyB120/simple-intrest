/*
Author:saamuel mbuya
Reg No:CT102/G/23825/24
Date:04/10/2024
*/
#include <stdio.h>
#include<math.h>
int main()
{   int principalamount, time, n ;
	float rate, compoundinterest;



	   printf("principal amount:");
	   scanf("%d\n", &principalamount);

	   printf("time:");
	   scanf("%d\n", &time);

	   printf("rate:");
	   scanf("%f\n", &rate);

	   printf(" enter number of times interest applied per time period:");
	   scanf("%d\n", &n);

	   compoundinterest=principalamount*pow(1+(rate/100)/n,n*time)-principalamount;

	   printf("compound interest= %.2f\n", compoundinterest);



	   return 0;
}
