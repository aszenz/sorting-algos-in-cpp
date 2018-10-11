#include <iostream>
using namespace std;
//The merge procedure which combines two sorted arrays into a single sorted array.
void merge(int arr[],int p,int q,int r)
{
	int n1=q-p+1;//size of the left array.
	int n2=r-q;//size of the right array.
	int left[n1],right[n2];//declaring the arrays.
	int i,j;
	for(i=0;i<n1;i++)
	{
		left[i]=arr[p+i];//putting values into the left array.
	}
	for(j=0;j<n2;j++)
	{
		right[j]=arr[q+j+1];//putting values into the right array.
	}
	i=j=0;
	for(int k=p;k<=r;k++)//putting the elements into the array in order.
	{
		if((i!=n1 && j==n2)||(i!=n1 && left[i]<=right[j]))//checks the full condition and the comparison. 
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
	}
}
//The sort procedure which works on the principle of divide and conquer.
void merge_sort(int arr[],int start,int end)
{
	if(start<end)
	{
		int middle = (start+end)/2;//even if the divison results in a floating point only the integer part is stored in middle.
		merge_sort(arr,start,middle);//sorting the left side of the array
		merge_sort(arr,middle+1,end);//sorting the right side of the array
		merge(arr,start,middle,end);//combining the two sides
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
	
	//*calling merge_sort function passing the array and the array range from 0 to n-1
	
		merge_sort(elm,0,n-1);
		
	//*
	
	//*displaying the sorted results
		cout<<endl<<"After sorting by Merge Sort : "<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<elm[i]<<",";
		}
	//*
}
