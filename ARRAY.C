#include<stdio.h>
#include<conio.h>

void main()
{
	int temp,i,j,arr[5]={2,4,7,8,5};
	clrscr();
	for(i=0;(i<5&arr[i]%2==0);i++)
	{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	}
	getch();
}
void sort()
{

}