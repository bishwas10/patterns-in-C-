#include <iostream>
using namespace std;
int main ()
{
    int i, j,row,s;
    cout << "Enter the number of rows" << endl;
    cin >> row;
    for ( i = 1 ;i <=row; i++)
    {
        for (s =1 ;s<=row-i;s++)
        {
            cout << " " ;
        }
        {
            for (j = 1; j<=2*i-1;j++)
            {
                cout << "*";
            }
        }
        cout << endl;
        
    }
    return 0;
}