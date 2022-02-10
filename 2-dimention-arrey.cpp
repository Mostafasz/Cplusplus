#include <iostream>
using namespace std;

int main()
{
	int arrey[3][3] = {
		{3, 5, 7},
		{2, 4, 6},
		{10, 11, 12}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arrey[i][j] << "\t";
		}
		cout << endl;

	}

	return 0;
}