// 3D ARRAY
#include<stdio.h>

int main(){
	int E,j,p;
	int scores[2][3][2] ={ {{60,70},{90,80},{78,82}},{{72,82},{64,68},{86,88}} }; ;
	for(E=0;E<2;E++){
		for(j=0;j<3;j++){
			for(p=0;p<2;p++){
				printf("scores[%d][%d][%d] = %d \n",E,j,p,scores[E][j][p]);
			}
		}
	}
	return 0;
}
