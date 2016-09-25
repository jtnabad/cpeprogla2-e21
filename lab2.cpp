//abad
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int factorial (int num);
int mAx(int i,int j);
int answer;

main ()
{
	cout<<"PROBLEM 1\n";
	double a;
	cout<<"Enter a number to be round of: ";
	cin>>a;
	cout<<"Round off value: "<<round(a);

	cout<<"\nPROBLEM 2\n";
	int i,number, A[20];
	cout<<"Unique numbers: ";
	for(i=0;i<10;i++)
	{
		A[i]=rand()%20+1;
		number=A[i];
		if (number!=A[i])
		cout<<number<<" ";
 	}

	cout<<"\nPROBLEM B\n";
	
	int ans=1;
	i=0;
	cout<<"Enter a number: ";
	cin>>i;
	cout<<"The factorial of "<<i<<" is : "<<factorial (i);

	cout<<"\nPROBLEM C\n";
	
	int j;
	i=0;
	cout<<"Enter first number: ";
	cin>>i;
	cout<<"\nEnter second number: ";
	cin>>j;
	cout<<"Greatest number is: "<<mAx(i, j);
	
	
	return 0;
}

int factorial (int num)
{
	int j,ans;
		for(j=1;j<=num;j++)
	{
		ans*=j;
	}
	return ans;
}

int mAx(int num1,int num2)
{
 if (num1>num2)
 answer=num1;
 else 
 answer=num2;

	return answer;	
	
}
