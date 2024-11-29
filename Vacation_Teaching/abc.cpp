#include <iostream>
using namespace std;

int main() {

int arr[100],i,size,data,k;
cout<<"Enter size of array:  ";
cin>>size;
cout<<"Enter elements: ";
for(i=0;i<size;i++){
    cin>>arr[i];
}
cout<<"Elements: "<<endl;
for(i=0;i<size;i++){
    cout<<arr[i]<<"\t"<<endl;
}

cout<<"Enter element to be inserted and position: ";
cin>>data>>k;
cout<<"The updated array: ";
for(i=size; i>=k;i--){
    arr[i+1]=arr[i];
}
arr[k]=data;
size++;

for(i =0;i<=size;i++)
{
    cout<<"\t"<<arr[i];
}
return 0;
}