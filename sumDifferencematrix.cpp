#include<iostream>

using namespace std;

int main()
{
	int a[3][3],b[3][3],sum[3][3],dif[3][3] , i , j;
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

	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			sum[i][j] = a[i][j] + b[i][j];
			cout << "sum is : " << sum[i][j] << endl;
		}
	}
	for ( i = 0 ; i < 3 ; i++ )
        {
                for ( j = 0 ; j < 3 ; j++ )
                {
                        dif[i][j] = a[i][j] - b[i][j];
                        cout << "dif is : " << dif[i][j] << endl;
                }
        }

	return 0;

}
