#include<stdio.h>

#define SIZE 12


//冒泡排序----大数据往下沉
void bubbleDown();
void bubbleUP();

int main()
{
   
   int intAry[SIZE] = {9,20,3,6,99,2,6,9,8,88,5,1};
   
   printf("%s\n","--------------------------------冒泡排序 算法一  -------------------------------");
   bubbleDown(intAry);
   
   printf("%s\n","--------------------------------冒泡排序 算法二  -------------------------------");
   bubbleUP(intAry);
   
   return 0;
}

void bubbleDown(int intAry[])
{
//	int intAry[SIZE] = {9,20,3,6,99,2,6,9,8,88,5,1};
	int i = 0;
	int j = 0;
	int tmp;
    int count = 0;

	for(i=0;i<SIZE-1;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
		   if(intAry[i]>intAry[j])
		   {
		     tmp = intAry[i];
			 intAry[i]=intAry[j];
			 intAry[j]=tmp;
		   }
		}
	}

    for(count=0;count<SIZE;count++)
	{
	   printf("%d\n",intAry[count]);
	}
	
}

void bubbleUP(int intAry[])
{
    
	//int intAry[SIZE] = {9,20,3,6,99,2,6,9,8,88,5,1};
	int i = 0;
	int j = 0;
	int tmp;
    int count = 0;
    
    for(i=0;i<SIZE-1;i++)
	{
	   for(j=0;j<SIZE-i-1;j++)
	   {
	       
		   if(intAry[j]>intAry[j+1])
		   {
		     tmp = intAry[j];
			 intAry[j]=intAry[j+1];
			 intAry[j+1]=tmp;
		   }
	   }
	}
    
    for(count=0;count<SIZE;count++)
	{
	   printf("%d\n",intAry[count]);
	}
}




























