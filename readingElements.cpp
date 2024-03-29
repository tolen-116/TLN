#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int ar[10], i;

    cout << "Please enter the elements of array: " << endl;
    for ( i = 0; i < 10; i++ )
    {
        cin >> ar[i];
    }

    cout << "The elements of the array are: " << endl;
    cout << "\n\nELEMENT" << setw( 13 ) << "VALUE" << endl;
    for ( int j = 0; j < 10; j++ )
    {
        cout << setw( 5 ) << j << setw( 13 ) << ar[j] << endl;
        
    }

    return 0;
}