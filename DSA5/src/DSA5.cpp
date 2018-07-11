//============================================================================
// Name        : DSA5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void permute(string *a,int k,int size)
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
{
	string A[]={'nikhita','aboli','megha','sanika','prarik','saurabh'};
	int r;
	cout<<"enter number of people in committee";
	cin>>r;
	permute(A,0,r);
	return 0;
}
