//addition of matrix array
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int rows,columns;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;

    int arr1[rows][columns];
    int arr2[rows][columns];
    int sum[rows][columns];

    //initializing 1st array
    cout<<"Enter 4 numbers: ";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cin>>arr1[i][j];
        }
    }
    
    //displaying 1st array
    cout<<"Array 1 = "<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //initializing 2nd array
    cout<<"Enter 4 numbers: ";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    //displaying 2nd array
    cout<<"Array 2 = "<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //addition
    cout<<"Sum of arrays = "<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cout<<arr1[i][j] + arr2[i][j]<<" ";
        }
        
        cout<<endl;
    }
}