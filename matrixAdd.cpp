//Matrix addition of two matrices

#include <iostream>
using namespace std;

int matrix_1[10][10];
int matrix_2[10][10];
int matrix_3[10][10];

int main()
{

    int m, n, p, q, i, j;

    cout << "\nFOR THE FIRST MATRIX: " << endl;
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

    cout << "\n\nThe first matrix is " << endl;
    for(i = 0; i < m; i++ )
    {
        for( j = 0; j < n; j++ )
        {
            cout << matrix_1[i][j] << "   ";

        }
        cout << endl;
    }

    




    cout << "\n\n\nFOR THE SECOND MATRIX: " << endl;
    cout << "Number of rows: ";
    cin >> p;
    cout << "Number of columns: ";
    cin >> q;

    cout << "Enter the elements: " << endl;
    for( i = 0; i < p; i++ )
    {
        for( j = 0; j < q; j++ )
        {
            cin >> matrix_2[i][j] ;
        }
    }

    cout << "\n\nThe second matrix is " << endl;
    for( i = 0; i < p; i++ )
    {
        for( j = 0; j < q; j++ )
        {
            cout << matrix_2[i][j] << "   ";
        }
        cout << endl;
    }

    if( m == p && n == q )
    {
        for( i = 0; i < m; i++ )
        {
            for( j = 0; j < q; j++ )
            {

                matrix_3[i][j] = matrix_1[i][j] +  matrix_2[i][j];

            }
        }

        cout << "\n\n\nThe addition of the two matrices is: " << endl;
        for( i = 0; i < p; i++ )
        {
            for( j = 0; j < q; j++ )
            {
                cout << matrix_3[i][j] << "   ";
            }
            cout << endl;
        }
    }

    else
    {
        cout << "The two matrices can't be added together!!" << endl;
    }

    



    return 0;


    
}