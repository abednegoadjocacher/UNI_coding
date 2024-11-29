#include <iostream>
using namespace std;

int main() {

int marks[100],i,size,data,k;
cout<<"Enter size of array:  ";
cin>>size;
cout<<"Enter elements: ";
for(i=0;i<size;i++){
    cin>>marks[i];
}
cout<<"Elements: "<<endl;
for(i=0;i<size;i++){
    cout<<marks[i]<<"\t";
}
cout<<endl;
cout<<"Enter element to be inserted and position: ";
cin>>data>>k;
cout<<"The updated array: ";
if(k>size){
    cout<<"Invalid position\n";
        break;
for(i=size; i>=k;i--){
   // if(k<size)
   // {
   //     cout<<"Invalid position\n";
   // }
    marks[i+1]=marks[i];
}
marks[k]=data;
size++;
}
for(i =0;i<size;i++)
{
    cout<<"\t"<<marks[i];
}
return 0;
}
