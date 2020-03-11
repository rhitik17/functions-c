#include<stdio.h>
int i=0;

int ram()
{
	if(i==10)
	return i;
	printf(" %d",i);
	i++;
	ram();
}

int main(){
	ram();
}


