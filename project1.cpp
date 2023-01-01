1)
#include <iostream>
using namespace std;

void max_min()
{
    int A[6][6];

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            A[i][j] = rand() % 10;

    int max = A[0][0];
    int min = A[0][0];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (A[i][j] > max)
                max = A[i][j];

            if (A[i][j] < min)
                min = A[i][j];
        }
    }

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;

    cout << endl;

    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 6; i++)
            cout << A[i][j] << " ";

        cout << endl;
    }
}

2)
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int A[6][4];

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			A[i][j] = rand() % 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	int buf = 0;
	int min = 0;
	int col = 0;
	int minA[4];

	for (int j = 0; j < 4; j++)
	{
		min += A[j][0];
	}

	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			buf += A[j][i];
		}

		if (min > buf)
		{
			min = buf;
			col = i;

		}
		buf = 0;

	}
	cout << endl;
	for (int j = 0; j < 4; j++)
	{
		minA[j] = A[j][col];
	}

	for (int j = 0; j < 4; j++)
	{
		cout << minA[j] << " ";
	}


	cout << endl;
	cout << endl;


}

3)
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
	srand(time(NULL));
	const int row = 8;
	const int col = 3;
	double arr[row][col];

	double res[col];
	double d = 0, d1 = 0;
	int index = 0;

	for (size_t j = 0; j < col; j++)
		res[j] = arr[0][j];

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int c = 0;
	while (c < col)
		d += abs(arr[0][c] + arr[2][c++]);
	cout << "\nd: " << d << endl;
	cout << endl;

	for (size_t i = 1; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
			d1 += abs(arr[i][j] + arr[2][j]);

		cout << d1 << " ";
		if (d1 < d)
		{
			d = d1;
			index = i;
		}
		d1 = 0;
	}
	cout << endl;
	for (size_t i = 0; i < col; i++)
	{
		res[i] = arr[index][i];
		cout << res[i] << " ";
	}
}
