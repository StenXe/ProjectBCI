#include<stdio.h>
#include<stdlib.h>

void bisearch(int arr[],int l ,int h,int no);
void sort(int arr[],int l,int h);
void merge(int arr[],int l,int m,int h);
void main()
{
	int i,n,num,low,high;
	printf(" ENTER THE NUMBER OF ELEMENT:\n");
	scanf("%d",&n);
	int arr[n];
	if(n>10)
	{
		for(i=0;i<n;i++)
	   	{
			arr[i]=rand()%1000;
	    	}
		printf("THE ARRAY IS:\n");
		for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
	}
	else
	{
		printf("Enter the Element:\n");

		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	}
	low=0;
	high=n-1;

	sort(arr,low,high);

	printf("SORTED ARRAY IS:\n");
	for(i=0;i<n;i++)
	 	printf("%d\n",arr[i]);
	do
	{
		printf("ENTER THE NUMBER TO BE SEARCHED:\n");
		scanf("%d",&num);
	 	bisearch(arr,low,high,num);
	}
	while(1);


}

void bisearch(int arr[],int l ,int h,int no)
{
int m=(l+h)/2;
if(arr[m]==no)
 printf("Number IS FOUND%d\n",m);
else if(arr[m]>no && arr[l]<=no)

bisearch(arr,l,m-1,no);

else if(arr[m]<no && arr[h]>=no)

bisearch(arr,m+1,h,no);
else
printf("NUMBER NOT FOUND");

}


void sort(int arr[],int l,int h)
{
	int i,m;
	if(l<h)
	{
		m=(l+h)/2;
		sort(arr,l,m);
		sort(arr,(m+1),h);
		merge(arr,l,m,h);
	}
}
void merge(int arr[],int l,int m,int h)
{
	int i,j,k,n1=m-l+1,n2=h-m,ar1[n1],ar2[n2];
	for(i=0;i<n1;i++)
		ar1[n1]=arr[l+i];
	for(j=0;j<n2;j++)
		ar2[n2]=arr[m+l+j];

	ar1[n1]=1000;
	ar2[n2]=1000;
	i=0;j=0;
		for(k=1;k<=h;k++);
		{
			if(ar1[i]<ar2[j])
				 arr[k]=ar1[i++];
			else
				arr[k]=ar2[j++];
		}
}






































