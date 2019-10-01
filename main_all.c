#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y,z,m;
	int a,b,c;
	
	x=1;
	z=3;
	a=3;
	b=4;
	c=5;
	
	y=a*x*x+b*x+c;
	m=(x+y+z)/3;
	
	printf("y=%d. m=%d\n",y,m); //practice 01
	
	
	int X=3;
	int cond1, cond2;
	
	cond1=2<X&&X<5;
	cond2=X>1||X<4&&X>3;
	
	printf("\ncond1=%d,cond2=%d\n",cond1,cond2); //practice 02
	
	int i,t;
	
	printf("\ninput two integers : ");
	scanf("%d %d",&i,&t);
	
	printf("\n+ result is %d\n",i+t);
	printf("- result is %d\n",i-t);
	printf("* result is %d\n",i*t);
	printf("/ result is %d\n",i/t);
	printf("%% result is %d\n",i%t); // practice 03
	
	
	return 0;
}
