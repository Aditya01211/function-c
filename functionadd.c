//Adding two no. using function.
#include<stdio.h>
int Add();
int main()      
{
	int x,y;
	printf("Enter the value of x and y:\n");
	scanf("%d%d",&x,&y);
	Add(x,y);
	printf("Thanks");
 } 
 int Add(int a,int b)
 {
 	int c;
    c=a+b;
	 printf("Added value:%d\n",c);
	 return(c);
	 
  }     
