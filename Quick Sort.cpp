//Quick Sort
#include <iostream>
using namespace std;
//The parition procedure which uses the pivot to return the index where the array is to be partitioned.
int partition(int arr[],int start,int end)
{
	int pivot = arr[end];//the last element is taken as the pivot
	int ppt=start-1;//used for knowing the final position of the pivot
	for(int i=start;i<end;i++)//loop searches for pivots true position in the array.
	{
		if(arr[i]<=pivot)
		{
			ppt=ppt+1;//since the condition is true hence the pivots position should be to right of arr[i]
			//Swapping arr[ppt] with arr[i]
			//Since the two indices could point to the same element in the array 
			//hence swapping shouldn't be done directly.
				int a = arr[ppt];
				int b = arr[i];
				arr[ppt]=b;
				arr[i]=a;
			//
		}
	}
	//Swapping the pivot with the element on its true position. 
		int a = arr[ppt+1];
		int b = arr[end];
		arr[ppt+1]=b;
		arr[end]=a;
		//
	return ppt+1;//return the index where the array is to be partitioned
}
//The basic sort procedure which works by partitioning the array into two parts.
void Quick_Sort(int arr[],int p,int r)
{
	if (p<r)//base condition
	{
		int q=partition(arr,p,r);//call to partition the array and store the pivots index.
		Quick_Sort(arr,p,q-1);//sort the left hand side of the partition.
		Quick_Sort(arr,q+1,r);//sort the right hand side of the partition.
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
	
	//*calling Quick_Sort function passing the array and the array range from 0 to n-1
	
		Quick_Sort(elm,0,n-1);
		
	//*
	
	//*displaying the sorted results
		cout<<endl<<"After sorting by Quick Sort : "<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<elm[i]<<",";
		}
	//*
}
