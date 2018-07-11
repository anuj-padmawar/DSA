//============================================================================
// Name        : DSA9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int m,n,A[5][5],sum=0,a,b,B[5][5],C[5][5],D[5][5],E[5][5];
	cout<<"enter the size of matrix";
	cin>>m>>n;
	cout<<"enter the elements of matrix";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
				{
					cin>>A[i][j];
				}
	}

	cout<<"the sum of diagonal elements is";
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
					{
						if(i==j)
						{
							sum=sum+A[i][j];
						}
					}
		}
	cout<<sum;
	int flag=0;
	for(int i=0;i<m;i++)
	{

		for(int j=0;j<i;j++)
		{
			if(A[i][j]==0)
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		cout<<"it i upper triangular matrix";
	}
	for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
			     A[i][j]=A[j][i];
			     }
			}
	for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
				     cout<<A[i][j];
				     }
				}
	cout<<"enter the size of second matrix";
			cin>>a>>b;
	cout<<"enter elements of second matrix";
	for(int i=0;i<a;i++)
					{
						for(int j=0;j<b;j++)
						{
					     cin>>B[i][j];
					     }
					}
	if(m==a && n==b)
	{
       for(int i=0;i<m;i++)
        {
	       for(int j=0;j<n;j++)
	        {
		C[i][j]=A[i][j]+B[i][j];
	         }
        }
	}
	cout<<"addition is";
	for(int i=0;i<m;i++)
					{
						for(int j=0;j<n;j++)
						{
					     cout<<C[i][j];
					     }
					}
	if(m==a && n==b)
		{
	       for(int i=0;i<m;i++)
	        {
		       for(int j=0;j<n;j++)
		        {
			D[i][j]=A[i][j]-B[i][j];
		         }
	        }
		}
		cout<<"subtraction is";
		for(int i=0;i<m;i++)
						{
							for(int j=0;j<n;j++)
							{
						     cout<<D[i][j];
						     }
						}
if(n==a)
{

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<b;j++)
		{
		  E[i][j]=0;
		  for(int k=0;k<b;j++)
		    {
			E[i][j]+=A[i][k]*B[k][j];
		    }
		}
	}
}
cout<<"their multiplication is";
for(int i=0;i<m;i++)
{
	for(int j=0;j<b;j++)
	{
		cout<<E[i][j];
	}
}
}

	return 0;
}
