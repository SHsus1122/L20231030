#include <iostream>

using namespace std;

int main()
{
	int numList[9][10] = 
	{ 
		1,1,1,1,1,1,1,1,1,1,
		1,0,0,0,1,0,0,0,0,1,
		1,0,0,0,1,0,0,0,0,1,
		1,0,0,0,1,0,0,0,0,1,
		1,1,1,1,1,1,1,1,1,1,
		1,0,0,0,1,0,0,0,0,1,
		1,0,0,0,1,0,0,0,0,1,
		1,0,0,0,1,0,0,0,0,1,
		1,1,1,1,1,1,1,1,1,1,
	};
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (numList[i][j] == 1)
			{
				numList[i][j] = 0;
			} 
			else
			{
				numList[i][j] = 1;
			}
			cout << numList[i][j];
		}
		cout << endl;
	}
	


	return 0;
}