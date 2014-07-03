#include<stdio.h>

void memeryArray(int a[], int n, int b[], int m, int c[])
{
   int i,j,k;
   i=j=k=0;
   while(i<n && j<m)
   {
      if(a[i] < b[j])
	  {
	  	c[k++] = a[i++];
	  }else{
	  	c[k++] = a[j++];
	  }
   }
}

int main()
{
	
	return 0;
}

