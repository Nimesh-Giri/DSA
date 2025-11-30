//One Dimensional Array :The array having only one boundary specification

#include<iostream>
using namespace std;

int main()
{
    int x[10],i;
    cout<<"Enter 10 elements into the array";

    for(i=0;i<10;i++)
    {
        cin>>x[i];
    }
    cout<<"The entered elements are:";
    for(i=0;i<10;i++)
    {
        cout<<" "<<x[i];
    }
}
