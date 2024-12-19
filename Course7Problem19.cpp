#include <iostream>
#include <iomanip>

using namespace std;


void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

short GetMaxNumberInMatrix(short Matrix[3][3], short Rows , short Cols)
{

	short Max = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] > Max)
			{
				Max = Matrix[i][j];
			}
		}
	}

	return Max;

}

short GetMinNumberInMatrix(short Matrix[3][3], short Rows, short Cols)
{

	short Min = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] < Min)
			{
				Min = Matrix[i][j];
			}
		}
	}

	return Min;
}

int main()
{

	srand((unsigned)time(NULL));


	short Matrix[3][3] = { {10,200,150} , {9,1,60} , {700,8,9} };


	cout << "\n matrix \n";
	PrintMatrix(Matrix, 3, 3);

	cout << "\n Max Number = ";
	cout << GetMaxNumberInMatrix(Matrix , 3 , 3);

	cout << "\n Min Number = ";
	cout << GetMinNumberInMatrix(Matrix, 3, 3);


	return 0;
}