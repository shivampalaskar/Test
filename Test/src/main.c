#include<stdio.h>

void sum(int,int);


void getData(int *ptr1,int *ptr2) {
	printf("Enter value: ");
	scanf("%d %d", ptr1, ptr2);
	int c = *ptr1 + *ptr2;
	printf("C : %d",c);
}


int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	int a,b;
	getData(&a,&b);
	//sum(a,b);
}

void sum(int x,int y){
	int z= x+y;
	printf("z : %d",z);
}
