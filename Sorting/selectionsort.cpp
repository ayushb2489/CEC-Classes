#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={5,3,7,4,5,2,78};
    int n=7,temp,index;
    for(int i=0;i<n-1;i++)
    {
        temp=arr[i];
        index=i;
        for(int j=i+i;j<n;j++)
        {
            if(arr[j]<temp)
            {
                temp=arr[j];
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
    }
    display(arr,n);
    return 0;
}