#include <stdio.h>

#define SIZE 12


void quickSort01();

void quickSort02();


int main()
{
	printf("%s\n","-------------------------------- 快速排序 -------------------------------");
	int count = 0;
	int ary[SIZE] = {23,9,90,203,2,92,99,90,2,9,12,23};
	quickSort01(ary,SIZE);
	
	for(count=0;count<SIZE;count++)
	{
	   printf("%d\n",ary[count]);
	}

	return 0;
}


void quickSort01(int intAry[], int num)
{
	int i=0,j=num-1;
	int key = intAry[0];
    if(num>1){
	while(i<j)
	{
		for(;j>i;j--)
		{
			if(intAry[j]<key)
			{
				intAry[i]=intAry[j];
				break;
			}
		}

		for(;i<j;i++)
		{
			if(intAry[i] > key )
			{
				intAry[j]=intAry[i];
				break;
			}
		}
		 	
	}
	intAry[i]=key;
	quickSort01(intAry,i);
	quickSort01(intAry+i+1, num-1-i);
	}
}

