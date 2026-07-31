#include <iostream>
using namespace std;

int main ()
{
    int *arr;
    int size;

    cout<<"Enter the size of the integer array: ";
    cin>>size ;

    cout<<"Creating an array of size"<<size<<"..";
    arr = new int(size);

    cout<<"\nDynamic allocation of memory for array arr is successful";

cout << "\nEnter the array numbers : ";
for(int i=0; i<size; i++)
{
    cin >> arr[i];
}
int sum = 0;

for (int i=0; i<size; i++)
{ 
    sum +=arr [i];

}
cout<<"\nThe sum of the array is:"
<<sum <<"\n";
delete arr ;
return 0;
}