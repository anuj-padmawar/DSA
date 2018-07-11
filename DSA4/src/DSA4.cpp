//============================================================================
// Name        : DSA4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void permute(char *a,int k,int size)
{
	if(k==size)
	{
		for(int i=0;i<size;i++)
		{
			cout<< *(a+i);
		}
	}
	else
	{
		for(int i=k;i<size;i++)
		{
			int temp=a[k];
			a[k]=a[i];
			a[i]=temp;
			permute(a,k+1,size);
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;
		}
	}
}
int main()
{ int r;
	cout<<"enter the length of password";
	cin>>r;
char A[6]={1,3,'a','s','t','i'};
    permute(A,0,r);
	return 0;
}
