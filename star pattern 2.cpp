#include<iostream>

using namespace std;
    /*
        1 1 1 1 
        2 2 2 2
        3 3 3 3
        4 4 4 4
    */
int main()
{
    int n,i =1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    
}