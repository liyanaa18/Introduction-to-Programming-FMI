#include <iostream>
using namespace std;


const int MAX_BUFFER = 1000;

bool isWhiteSpace(char item)
{
	return item == ' ' || item == '\t';
}


int main()
{
	char str[MAX_BUFFER];

	cin.getline(str, MAX_BUFFER);

	int counter = 0;
	int resultCounter = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isWhiteSpace(str[i]) && str[i] != '\0')
		{
			while (!isWhiteSpace(str[i]) && str[i] != '\0')
			{
				counter++;
				i++;

				if (isWhiteSpace(str[i]) || str[i] == '\0')
				{
					if (counter % 2 == 0)
					{
						resultCounter++;
						counter = 0;
					}
					else
					{
						counter = 0;
					}
				}
			}
		}
	}

	cout << resultCounter;

	return 0;
}