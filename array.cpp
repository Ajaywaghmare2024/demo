#include<iostream>
#define SIZE 5
using namespace std;

void ascending(int arr[])
{
	for(int i=0; i<SIZE; i++)
	{
		for(int j=i+1; j<SIZE; j++)
		{
			
			if(arr[i]>arr[j])
			{
				int temp;
				 temp=arr[i];
				 arr[i]=arr[j];
				 arr[j]=temp;
			}
			
		 		
		}
	}
	cout<<endl;
	for(int i=0; i<SIZE; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}


void descending(int arr[])
{
for(int i=0; i<SIZE; i++)
	{
		for(int j=i+1; j<SIZE; j++)
		{
			
			if(arr[i]<arr[j])
			{
				int temp;
				 temp=arr[i];
				 arr[i]=arr[j];
				 arr[j]=temp;
			}
			
		 		
		}
	}
	cout<<endl;
	for(int i=0; i<SIZE; i++)
	{
		cout<<arr[i]<<" ";
	}
		
}

int main()
{
	int arr[SIZE]={10,67,22,2,8};
	cout<<endl;
	for(int i=0; i<SIZE; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	ascending(arr);
	cout<<endl;
	descending(arr);
		
}
