// Diagonal Difference

#include	<iostream>
#include	<cmath>
#include	<iomanip>
using	namespace	std;

const		int 	SIZE=3;

int			getdiagonalsum1(int [][SIZE]);
int			getdiagonalsum2(int [][SIZE]);

int			main()
{
	int		number[SIZE][SIZE] = {  {10, 20, 10}, 
									{80, 90, 100}, 
									{ 100, 200, 300}};
	int		sum1,sum2;

	sum1 = getdiagonalsum1(number);
	sum2 = getdiagonalsum2(number);
	cout << "Difference is : " << setw(5) << abs(sum1-sum2) << endl;
}
int			getdiagonalsum1(int number[][SIZE])
{
	return sum;	
}
int			getdiagonalsum2(int number[][SIZE])
{
	return sum;
}
