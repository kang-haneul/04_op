#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=3;
	int cond1, cond2;
	
	cond1=2<x&&x<5;
	cond2=x>1||x<4&&x>3;
	
	printf("cond1=%d,cond2=%d\n",cond1,cond2);
	
	
	return 0;
}
