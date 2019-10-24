#include<stdio.h>
#include<math.h>
 int main(){
 	char op;
	double x,y,result,error;
	scanf("%lf %c %lf",&x,&op,&y);
	error=0;
 	switch(op){
 		case'+':
		 result=x+y; break;
 		case'-':
		 result=x-y; break;
 		case'*':
		 result=x*y; break;
 		case'/':
		 if(fabs(y)>1e-10)
		result=x/y;
		else
		error=1;
		break;
 		default:
 			error=1;} 
		if(error==0)
		{printf("%.2lf",result);}
		else
		printf("Wrong input!");
	 return 0;
 }
