//============================================================================
// Name        : DSA3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int costs[100],high[100],low[100];
	int n,temp,m=0,loc;
	cout<<"enter the number of books";
	cin>>n;
	cout<<"enter the costs of the books";
	for(int i=0;i<n;i++)
	{
		cin>>costs[i];
	}
	//sorting
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(costs[i]<costs[j])
			{
				temp=costs[i];
				costs[i]=costs[j];
				costs[j]=temp;
			}
		}
	}
	//after sorting
	for(int i=0;i<n;i++)
	{
		cout<<costs[i]<<endl;
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<0;j++)
		{
	       if(costs[i]>500)
	       {
	    	   count++;
	       }
	     }
    }
	cout<<"number of books above 500 are="<<count;
	for(int i=0;i<n;i++)
		{
			if(costs[i]<500)
			{
				low[m]=costs[i];
				m++;
			}
		}
	cout<<"books with value less than 500 are";
	for(int i=0;i<m;i++)
	{
		cout<<low[i];
	}
	//reversing array without using temporary variable
	int arr[100];
	for(int i=0,j=100;i<100,j<0;i++,j--)
	{
		arr[j]=costs[i];
	}
	cout<<"reversed array is";
	for(int i=0;i<100;i++)
	{
		cout<<arr[i];
	}
	//deleting data of specific location
	cout<<"enter the location";
	cin>>loc;
	if(loc>n)
	{
		cout<<"out of range";
	}
	else
	{
		--loc;
		for(int i=loc;i<n;i++)
		{
			costs[i]=costs[i+1];
		}
		cout<<"new data is";
		for(int i=0;i<n;i++)
		{
			cout<<costs[i];
		}
	}
	//deleting duplicate data without using temporary array
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(costs[i]==costs[j])
			{
				for(k=j;k<n-1;++k)
					costs[k]=costs[k+1];
					--n;
			}
			else
				++j;
		}
	}
	cout<<"after deleting data is";
	for(int i=0;i<n;i++)
	{
		cout<<costs[i];
	}
	//deleting duplicate data using temporary array
	int tem[100],p=0;
	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(costs[i]!=costs[j])

					tem[p]=costs[i];
				p++;
		    }
		}
	cout<<"data is";
	for(int i=0;i<p;i++)
	{
		cout<<tem[i];
	}

	return 0;
}
