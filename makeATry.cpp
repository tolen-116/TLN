#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main()
{
    float a, b, c, root1, root2;

    cout << "Please enter the values of coefficients ( a, b, c ): ";
    cin >> a >> b >> c;

    float dis = sqrt( b * b - 4 * a * c );
    if( dis >= 0 )
    {
        root1 = ( - b + dis ) / ( 2 * a );
        root2 = ( - b - dis ) / ( 2 * a );

    }
    else
    {
        cout << sqrt( - 3 );
    }

    //cout << "Root 1: " << root1 << endl;
    //cout << "Root 2: " << root2 << endl;

    return 0;
}