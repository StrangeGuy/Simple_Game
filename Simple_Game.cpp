// Simple_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void initialize(int size) {
	for (int i = 0; i <= size; i++) {
		for (int j = 0; j <= size; j++) {
			if (i == 0 || i == size) {
				std::cout << "_";
			}
			else if (j == 0 || j == size) {
				std::cout << "|";
			}
			else { std::cout << " "; }
		}
		std::cout << std::endl;
	}
}

int main()
{
	//initialize(20);
	
	int posy = 1;
	int posx = 1;
	char control;
	char field[21][20]{};
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (i == 0 || i == 19) {
				field[i][j] = '-';
			}
			else if (j == 0 || j == 19)
			{
				field[i][j] = '|';
			}
			else if (i == 20)
			{
				field[i][j] = '\n';
			}
			else if (posy == i && posx == j) {
				field[i][j] = 'X';
			}
			else if (i == 18 && j == 18)
			{
				field[i][j] = '0';
			}
			else {
				field[i][j] = ' ';
			}

		}
	}
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 20; j++) {
			std::cout << field[i][j];
		}
		std::cout << "\n";
	}

	while (posy != 18 || posx != 18) {
		std::cin >> control;
		if (control == 'w' && posy != 1) posy--;
		if (control == 's' && posy != 18) posy++;
		if (control == 'a' && posx != 1) posx--;
		if (control == 'd' && posx != 18) posx++;
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				if (i == 0 || i == 19) {
					field[i][j] = '-';
				}
				else if (j == 0 || j == 19)
				{
					field[i][j] = '|';
				}
				else if (i == 20)
				{
					field[i][j] = '\n';
				}
				else if (posy == i && posx == j) {
					field[i][j] = 'X';
				}
				else if (i == 18 && j == 18)
				{
					field[i][j] = '0';
				}
				else {
					field[i][j] = ' ';
				}

			}
		}
		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 20; j++) {
				std::cout << field[i][j];
			}
			std::cout << "\n";
		}
	}

}