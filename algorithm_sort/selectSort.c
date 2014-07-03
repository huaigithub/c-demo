#include<stdio.h>

#define SIZE 12

void selectsort(int *ary,int len);
void display(int *ary, int len);

int main()
{
	printf("%s\n","--------------------------------选择排序 算法  -------------------------------");
    int intAry[SIZE] = {9,20,3,6,99,2,6,9,8,88,5,1};
	selectsort(intAry, SIZE);
	display(intAry, SIZE);
	
	return 0;
}

void selectsort(int *ary, int len)
{
	int i=0,j=0;
	int temp,index;
	for(i=0;i<len-1;i++)
	{
	   temp = ary[i];
	   index = i;
	   for(j=i;j<len;j++)
	   {
	   	  if(ary[j]<temp)
		  {
		  	 index = j;
			 temp = ary[j];
		  }
	   }
	   ary[index] = ary[i];
	   ary[i]=temp;
	}
}



void display(int *ary, int len)
{
   int i = 0;
   for(i =0;i<len;i++)
   {
      printf("%d\n", *(ary+i));
   }

}
