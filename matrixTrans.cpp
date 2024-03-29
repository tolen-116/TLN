#include <iostream>
using namespace std;

int matrix_1[10][10];

int main()
{

    int m, n, i, j;

    cout << "\nFOR THE MATRIX: " << endl;
    cout << "Number of rows: ";
    cin >> m;
    cout << "Number of columns: ";
    cin >> n;

    cout << "Enter the elements: " << endl;
    for(i = 0; i < m; i++ )
    {
        for( j = 0; j < n; j++ )
        {
            cin >> matrix_1[i][j];
        }
    }

    cout << "\n\nThe ORIGINAL matrix is " << endl;
    for(i = 0; i < m; i++ )
    {
        for( j = 0; j < n; j++ )
        {
            cout << matrix_1[i][j] << "   ";

        }
        cout << endl;
    }

    




    cout << "\n\n\nThe TRANSPOSSED matrix is: " << endl;
    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < m; j++ )
        {
            cout << matrix_1[j][i] << "   ";
        }
        cout << endl;
    }

    



    return 0;  


    
}