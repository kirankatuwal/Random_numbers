#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//- - - Declaration Function ---
int largest(int num[],int size)
{
	int i,lar=num[1];
	for(i=1;i<=10;i++)
	{
		if(num[i]>lar)
		lar=num[i];
	}
	return lar;
}
int total(int num[],int size)
{
	int i,tot=0;
	for(i=1;i<=10;i++)
	{
		tot=tot+num[i];
	}
	return tot;
}
double average(int num[],int size)
{
	int i,tot=0,av=0;
	for(i=1;i<=10;i++)
	{
		tot=tot+num[i];
	}
	av=tot/size;
	return av;
}

// Declaration Function Ends and Main funcion starts - - - 
int main()
{
	int tot=0,larg,size=10,r;
	int num[10],count=1;
	double av=0;
	
	printf("The 10 random number are :\n");
	srand(time(0));
	while (count<=10)
	{
		
		r=(rand()%100 +1);  // generating random number
		
			num[count]=r;
			printf("%d\n",num[count]);
			count++;
		
	}
	tot=total(num,size);   // calling function
	av=average(num,size);
	larg=largest(num,size);
	printf("Total= %d\nAverage=%lf\nLargest= %d",tot,av,larg);
	
  // File open for writing. . . 
	FILE *FP;
	FP =fopen("output.dat","w");
	fprintf(FP,"Total= %d\nAverage=%lf\nLargest= %d",tot,av,larg);
	fclose(FP);
	return 0;
	getch();
}
