#include <stdio.h>


int main()
{
	int bookID;
	int duedate;
	int returndate;
	int daysoverdue;
	int rate;
	int Amount;
	int FineRate;

	printf("enter bookID:");
	scanf("%d",&bookID);

	printf("enter due date:");
	scanf("%d",&duedate);

	printf("enter returndate:");
	scanf("%d",&returndate);

	daysoverdue=returndate-duedate;

	if(daysoverdue<=7){
		rate=20;
	}else if (daysoverdue<=14){
		rate=50;
	}else{
		rate=100;
}
     Amount=rate*daysoverdue;

    printf("Book ID:%d\n",bookID);
    printf("duedate:%d\n",duedate);
    printf("returndate:%d\n",returndate);
    printf("Days Overdue:%d\n",daysoverdue);
    printf("FineRate:%d per day\n",FineRate);
    printf("Total Fine Amount:ksh %d\n",Amount);


    return 0;
}
