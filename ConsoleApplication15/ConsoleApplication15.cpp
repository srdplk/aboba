// ConsoleApplication15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

using namespace std;
// system("chph 1251");
//setlocale(LC_ALL, "Russian";

unsigned int you = 0;
int pc = 0;
unsigned int ro;
unsigned int i;

void age() {
	srand(time(NULL));

	cout << "Введите количество раундов\n";

	cin >> ro;
	while (i != ro )
	{	
		cout << "Введите ваше значение:\n ";
		cin >> you;
		
		string q[3] = { "ножницы", "камень", "бумага" };
		
		pc = rand() % 3;
		cout << "PC = " << pc << endl;

		if (you >= 3) {
			cout << "Error" << endl;
			return age();
		}

		if (you == 0 && pc == 2 || you == 2 && pc == 1 || you == 1 && pc == 0) {
			cout << " You win!" << endl;
		}
		else if (you == pc) {
			cout << "Ничья!" << endl;
		}
		else {
			cout << "Ты проиграл!" << endl;
		}
		i++;
	}
}
	int main() {
		setlocale(LC_ALL, "Russian");
		cout << "Введите число, где 0 - ножницы " << endl << "1 - это камень " << endl << "2 это бумага" << endl;
		age();
		cout << "You: " << you << endl << "Pc: " << pc << endl;
		//string bot[3] = {"test","rom","uijjkjlljl;"};
		//char h[5] = { 't','e','s','t', '!'};
		//for (int i = 0; i < 3; i++) {

		//cout << a[i] << " ";
		//}

	}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
