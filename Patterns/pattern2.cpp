#include<iostream>
using namespace std;

void pattern1(int n)
{
    int i,j;
    for(i= n;i>0;i--)
    {
        for(j=i;j>0;j--)
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