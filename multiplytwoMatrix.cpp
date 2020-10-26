#include<iostream>

using namespace std;

void multiply(int a[3][3], int b[3][3] , int mul[3][3] );
int main()
{
	int a[3][3],b[3][3],mul[3][3] , i , j;
	cout << "enter the first array" << endl;
	for ( i = 0 ; i < 3 ; i++ ) 
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			cin >> a[i][j];
		}
	}
	cout << "enter the second array" << endl;
	for ( i = 0 ; i < 3 ; i++ ) 
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			cin >> b[i][j];
		}
	}

	multiply(a,b,mul);
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			cout  << mul[i][j] << " ";
		}
			cout << endl;
	}

	return 0;

}

void multiply( int a[3][3] , int b[3][3] , int mul[3][3] )
{
	int i,j,k;
	for( i = 0 ; i < 3 ; i++ )
	{
		for( j = 0 ; j < 3 ; j++ )
		{
			mul[i][j] = 0;
		
		for( k = 0 ; k < 3 ; k++ )
			mul[i][j] = mul[i][j] + a[i][j] * b[i][j];
		}
	}
}

