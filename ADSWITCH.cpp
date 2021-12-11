#include <iostream>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	cout << "Press Enter to exit...\n";
	while (dir != '\r')
	{
		cout << "\nYour coordinates: " << x << ", " << y;
		cout << "\nChoose direction (n, s, e, w): ";

		dir = getche();
		switch (dir)
		{
		case 'n':
			y--;
			break;
		case 's':
			y++;
			break;
		case 'e':
			x++;
			break;
		case 'w':
			x--;
			break;
		case '\r':
			cout << "Exit....\n ";
			break;
		default:
			cout << "Try once more\n ";
			break;
		}
	}

	system("pause");
	return 0;
}