/*The array having more than one boundary specification is known as multi
dimensional array. The total number of elements to be stored inside a
multi dimensional array is equals to the product of its boundaries.*/

//WAP to input a 3 x 3 matrix and find out the sum of lower triangular elements.

#include <iostream>
using namespace std;

int main()
{
    int mat[3][3],i,j,sum=0;


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter the element :";
            cin>>mat[i][j];

        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i>=j)
           {
            sum= sum+mat[i][j];
           }

        }
    }


     cout<<"\nThe matrix is\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            cout<<"\t"<<mat[i][j];
            

        }
        cout<<"\n";
        
    }
    cout<<"The sum of elements of the lower triangle is:"<<sum;

    
}

