#include<iostream>
using namespace std;

void pattern1(int n)
{
    int i,j;
    for(i= 0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }

}

int main()
{
 
    cout<< "Number of rows in the pattern?"<<endl;
    int n;
    cin>>n;
    pattern1(n);
    cout<<endl;
    

}