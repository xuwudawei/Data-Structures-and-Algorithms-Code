//Merge Sort using recursion
#include<iostream>

using namespace std;

void mergeSort(int a[],int p,int r);
void merge(int a[],int p,int q,int r);
void printArray(int arr[],int size);

int main(){
    int size;
    cout<<"\nEnter the size of the list: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the individual element of the list: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"\nInitial Array: "<<endl;
    printArray(arr,size);
    mergeSort(arr,0,size-1);
    cout<<"\nSorted Array:"<<endl;
    printArray(arr,size);
    return 0;
}



void mergeSort(int a[],int p,int r){
    int q;
    if(p<r){
        q=(p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,p+1,r);
        merge(a,p,q,r);
    }
}



// function to merge the subarrays
void merge(int a[], int p, int q, int r)
{
    int b[20];   
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;
    while(i <= q && j <= r)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];    // same as b[k]=a[i]; k++; i++;
        }
        else
        {
            b[k++] = a[j++];
        }
    }
  
    while(i <= q)
    {
        b[k++] = a[i++];
    }
  
    while(j <= r)
    {
        b[k++] = a[j++];
    }
  
    for(i=r; i >= p; i--)
    {
        a[i] = b[--k];  // copying back the sorted list to a[]
    } 
}


// function to print the array
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
 
