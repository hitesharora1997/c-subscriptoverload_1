#include<iostream>
using namespace std;

const int limit = 100;

class safearray
{
	private:
		int arr[limit];

	public:
		void putel( int n , int elvalue )
		{
			if (n < 0 || n >= 50 )
			{
				cout<<"\n hello == index out of bound "<<endl;
				exit(1);
			}
			arr[n] = elvalue;
			cout << "arr[n] " << arr[n] << " n " << n << endl;
		}

		int getel ( int n ) const
		{
			if ( n < 0 || n >= 50 )
			{
				cout <<"\n bro == index out of bounds "<<endl;
				exit(1);
			}
			return arr[n];
		}
};

int main()
{
	safearray sa1;
	register int j;
	for( j = 0 ; j < 50 ; j++ )
	{
		sa1.putel(j,j*10);
	}

	for ( j = 0 ; j < 50 ; j++ )
	{
		int temp = sa1.getel(j);
		cout << " hello world == element " << j << " is " << temp << endl;
	}
	return 0;
}

