//displaying matrix array
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[2][3];

    // cout<<"Enter value of a and b: ";
    // cin>>a>>b;

    cout<<"Enter 6 numbers: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*
Enter 6 numbers: 4 3 6 7 2 1
4 3 6 
7 2 1 
*/
