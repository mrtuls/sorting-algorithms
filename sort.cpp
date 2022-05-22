#include <stdio.h>
#include <stdlib.h>

void printarray(int arr[],int len)
{
	for(int i=0; i<len; i++)
		printf("%d --> %d\n",i,arr[i]);
}

void fillarray(int arr[],int len)
{
	for(int i=0; i<len; i++)
		arr[i]=rand() % 500;
}

void bubblesort(int arr[],int len)
{
	int swapped=1;
	while(swapped==1)
	{
		swapped=0;
		for(int i=0; i<len-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1]=temp;
				swapped=1;
			}
		}
	}
}

void selectionsort(int arr[],int len)
{
	for(int i=0; i<len; i++)
	{
		int min=i;
		for (int j=i+1; j<len;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min]=temp;
	}	

}

void insertion(int arr[], int len)
{
 int i,j,temp;
 for(i=0; i<len; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[j]>arr[j+1])
    {
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
    else
      break;
   }
 }
}


int main()
{
	int SIZE=100;
	int A[SIZE];

	fillarray(A,SIZE);
	printf("Sýralanmamýþ Array\n");
	printarray(A,SIZE);
	//bubblesort(A,SIZE);
	//selectionsort(A,SIZE);
	insertion(A,SIZE);
	printf("Sýralanmýþ Array\n");
	printarray(A,SIZE);
}
