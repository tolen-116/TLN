#include <iostream>
using namespace std;

class DynamicArray
{
    private:
        int * data;
        int size;
        int memory;

    public:
        DynamicArray( int size )
        {
            size = size;
            data = new int[ size ];

            cout << "Dynamic array of size " << size << " created." << endl;
        }

        void setValue( int index, int value )
        {
            if( index >= 0 || index < size )
            {

                data[ index ] = value;
            }
        }

        void getValue( int index )
        {
            if( index >= 0 || index < size )
            {
                cout << data[ index] << "  ";
            }
        }

        ~DynamicArray()
        {
            delete[] data;
        }
};

int main()
{
    DynamicArray arr( 10 );
    for( int i = 0; i < 10; i++ )
    {
        arr.setValue(i, i * 10 );
    }

    for( int i = 0; i < 10; i++ )
    {
        arr.getValue( i );
    }

    return 0;
}
