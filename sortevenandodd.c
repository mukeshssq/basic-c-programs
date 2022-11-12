//NAME       : MUKESH S
//COLLEGE    : ADHI COLLEGE OF ENGINEERING AND TECHNOLOGY
//DEPARTMENT : COMPUTER SCIENCE AND ENGINEERING
//MAILID     : mukesh.ss@gmail.com
//PHONE NO   : 7397347681



#include<stdio.h>
#include<conio.h>
void CollectingOddEven(int a[],int evenArray[],int oddArray[],int size)
{
	int i,evenCount=0,oddCount=0;
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			evenArray[evenCount]=a[i];
			evenCount++;
		}
		else
		{
			oddArray[oddCount]=a[i];
			oddCount++;
		}
	}	
}
void SortingOddNumbers(int oddArray[],int mergearray[],int m,int half)
{
	int temp,i=0,j=0;
	//sorting is done by using bubble sort
	for(i=0;i<half;i++)
	{
		for(j=i+1;j<half;j++)
		{
			if(oddArray[i]>oddArray[j])
			{
			  temp=oddArray[i];
			  oddArray[i]=oddArray[j];
			  oddArray[j]=temp;
			}
		}
	}
    
    //sorted array is added into merge array
	for(i=0;i<half;i++)
	{
		mergearray[m]=oddArray[i];
		m++;	
	}
	
	//printing the odd-merge array
	for(i=0;i<half;i++)
	{
		printf("%d ",mergearray[i]);
	}
}
void SortingEvenNumbers(int evenArray[],int mergearray[],int m,int half)
{
	int i=0,j=0,temp;
	//sort the even numbers using bubble sort
	for(i=0;i<half;i++)
	{
		for(j=i+1;j<half;j++)
		{
			if(evenArray[i]>evenArray[j])
			{
			  temp=evenArray[i];
			  evenArray[i]=evenArray[j];
			  evenArray[j]=temp;
			}
		}
	}
	//add the even numbers into merge array
	for(i=0;i<half;i++)
	{
	
		mergearray[m]=evenArray[i];
	    m++;
	}
    //print the even-merge array
	for(i=0;i<half;i++)
	{
		printf("%d ",mergearray[i]);
	}
}
	
void main()
{
  
  `	printf("Enter the size of array : ");
	int size;
	scanf("%d",&size);
	
	//Declarations arrays and counters
	
	int a[size];
	int evenArray[size/2];
	int evenCount=0;
	int oddArray[size/2];
	int oddCount=0;
	int i,m=0,j=0,temp=0;
	int mergearray[size];
	int half=size/2;

    //getting the elements for users	
	printf("Enter the elements side by side :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	//Collecting odd and even numbers from the input array
	CollectingOddEven(a,evenArray,oddArray,size);
	
	//Sort and print the odd numbers
	SortingOddNumbers(oddArray,mergearray,m,half);
	
	//sort and print the even numbers
    SortingEvenNumbers(evenArray,mergearray,m,half);

}
