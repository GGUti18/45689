#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    double i, n, sum = 0;
    cout << "Input numbers";
    for (i = 0; i < 9; i++)
    {
        cin >> n;
        if (abs(n) <= 5)
            sum += n;
    }
    cout << sum;
    return 0;


}


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	double x, min, max;
	cout << "Type amount of numbers "; cin >> n;
	cout << "Type numbers: \n";
	cin >> x;
	min = x;
	cin >> x;
	max = x;
	for (int i = 3; i <= n; i++)
	{
		cin >> x;
		if (i % 2 == 1)
		{
			if (min > x) min = x;
		}
		else
			if (max < x) max = x;
	}

	cout << "sum " << min + max;


	return 0;







}