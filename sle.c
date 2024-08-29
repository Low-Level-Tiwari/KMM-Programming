#include<stdio.h>
#include<unistd.h>
void main()
{
	int count = 5;
	int i,j,z=0,c=0;
	while(z++<6){
	for(i=0;i<count;i++)
	{
		printf("* ");
		fflush(stdout);
		usleep(100000);
	}
	j=0;c+=i;
	printf("\n");
	while(j<count-1){
		for(i=0;i<c-1;i++)printf("  ");
		printf("*\n");
		fflush(stdout);
		usleep(100000);j++;
	}
	for(i=0;i<c-1;i++)printf("  ");
	c-=1;
	}
	/*
	for(i=0;i<29;i++){
		printf("  ");
	}
	fflush(stdout);
	for(i=0;i<30;i++)
	{
		printf("*");
		fflush(stdout);
		usleep(100000);
		printf("\b\b\b");	
		//fflush(stdout);
	}
	printf("\n");
	*/
	

}
