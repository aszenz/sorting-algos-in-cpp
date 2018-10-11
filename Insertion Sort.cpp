//Insertion Sort
#include <iostream>
using namespace std;

void insertion_sort(int arr[],int size)
{
	for(int i=1;i<size;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	//*getthe no of elements to be sorted.
		cout<<"Enter the no of elements"<<endl;
		int n;
		cin>>n;
	//*
	
	//*creating and initializing the array of n elements
		int elm[n];
		cout<<"Enter "<<n<<" elements"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>elm[i];//getting nos from the user
		}
	//*
	
	//*displaying the entered results
		cout<<"You have entered"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<elm[i]<<",";
		}
	//*
	
	//*calling insertion_sort function passing the array and the array size
	
		insertion_sort(elm,n);
		
	//*
	
	//*displaying the sorted results
		cout<<endl<<"After sorting by Insertion Sort : "<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<elm[i]<<",";
		}
	//*	
}
