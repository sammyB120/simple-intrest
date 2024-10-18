/*
Author:saamuel mbuya
Reg No:CT102/G/23825/24
Date:17/10/2024
*/
// 2D ARRAY
#include<stdio.h>
int main(){
  int j,p;
  int scores[3][2] = {{40,50},{58,76},{92,88}};
  for(j=0;j<3;j++){
	  for(p=0;p<2;p++){
	  	printf("scores[%d][%d] = %d\n",j,p,scores[j][p]);

	  }
  }
  return 0;
}
