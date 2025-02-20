#include <iostream>
using namespace std;
int curr_size=0;
bool isFull(int *arr,int size)
{
    if(size==curr_size)return true;
    else return false;
}
bool isEmpty(int *arr,int size)
{
    if(curr_size==0)return true;
    else return false;
}
void print(int *arr,int size)
{
    int i=0;
    cout<<"\n elements are ";
    for(i=0;i<curr_size;i++)cout<<arr[i]<<" ";
}
void insertAtBegining(int *arr,int size,int ele)
{
    if(isFull(arr,size))
    {
        cout<<"array is full can't insert ";
        return ;
    }
    for(int i=curr_size-1;i>=0;i--)
    {
     arr[i+1]=arr[i];
    }
    arr[0]=ele;
    curr_size++;
}
void insertAtEnd(int *arr,int size,int ele)
{
    if(isFull(arr,size))
    {
        cout<<"array is full can't insert ";
        return ;
    }
    arr[curr_size]=ele;
    curr_size++;
}
void insertAtidx(int *arr,int size,int ele,int idx)
{
    if(isFull(arr,size))
    {
        cout<<"array is full can't insert ";
        return ;
    }
    if(idx>curr_size-1 and idx<size)
    {
        arr[idx]=ele;
        curr_size++;
        return;
    }
    for(int i=curr_size-1;i>=idx;i--)
    {
     arr[i+1]=arr[i];
    }
    arr[idx]=ele;
    curr_size++;
}
void deleteAtBegining(int *arr,int size)
{
    if(isEmpty(arr,size))
    {
        cout<<" array is empty can't delete ";
        return ;
    }
    for(int i=1;i<curr_size;i++)
    {
        arr[i-1]=arr[i];
    }
    curr_size--;
    
}
void deleteAtEnd(int *arr,int size)
{
    if(isEmpty(arr,size))
    {
        cout<<" array is empty can't delete ";
        return ;
    }
    curr_size--;
}
void deleteAtidx(int *arr,int size,int idx)
{
    if(isEmpty(arr,size))
    {
        cout<<" array is empty can't delete ";
        return ;
    }
    if(idx>curr_size-1 ) return ;
    
    if(idx<=curr_size-1 and idx>=0)
    {
       for(int i=idx+1;i<curr_size;i++)arr[i-1]=arr[i];
       curr_size--;
    }
    
}
int main()
{
    int size;
    //cout<<"enter size";
    cin>>size;
    int *arr=new int[size];
    insertAtBegining(arr,size,10);
    insertAtBegining(arr,size,20);
    insertAtBegining(arr,size,30);
    insertAtEnd(arr,size,100);
   deleteAtEnd(arr,size);
   deleteAtBegining(arr,size);
   deleteAtidx(arr,size,0);
   deleteAtidx(arr,size,0);
   deleteAtidx(arr,size,0);
    print(arr,size);
    return 0;
}