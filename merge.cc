#include<iostream>
#include <cstdlib>
#include<time.h>

using namespace std;

//Random variable generator
void RandomGen(int arr[], int n)
{
   srand(time(NULL));
   for (int i= 0; i < n; i++)
   {
       arr[i] = rand()%10;
   }
}

// Merge Function
void Merge(int a[], int low,int mid,int high)
{
     int i,k,j,b[500000];
     i=k=low;
     j=mid+1;

    while(i<=mid && j<=high)
{        if(a[i]<a[j])
            b[k++]=a[i++];
         else
            b[k++]=a[j++];

}    while(i<=mid)
            b[k++]=a[i++];
     while(j<=high)
            b[k++]=a[j++];
    for(i=low;i<k;i++)
        a[i]=b[i];
}

//Merge Sort Function
void mergeSort(int a[],int firstIndex,int lastIndex)
{
    int mid;
    if(firstIndex<lastIndex)
     {  mid=(firstIndex+lastIndex)/2;
        mergeSort(a,firstIndex,mid);
        mergeSort(a,mid+1,lastIndex);
        Merge(a,firstIndex,mid,lastIndex);
}
}
int main()
{   int ray[5000];
    int size;
    cout<<"Enter number of elements to sort"<<endl;
    cin>>size;
    cout<<"Unsorted Array"<<endl;
    RandomGen(ray, size);
    for (int i = 0; i<size; i++)
    {
        cout<<ray[i];
    }
    cout<<endl;

    mergeSort(ray,0,size-1);

    cout<<"Sorted Array"<<endl;

    for (int i = 0; i<size; i++)
    {
        cout<<ray[i];
    }
    return 0;
}
