// ConsoleApplication15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

using namespace std;
// system("chph 1251");
//setlocale(LC_ALL, "Russian";

string you = 0;
int pc = 0;
unsigned int ro;
unsigned int i;
		string q[3] = { "�������", "������", "������" };

void age() {//

	cout << "������� ���������� �������\n";

	cin >> ro;
	while (i != ro )
	{	
		cout << "������� ���� ��������:\n ";
		cin >> you;
		
		
		pc = rand() % 3;
		cout << "PC = " << pc << endl;
		for (int i = 0; i < 3; i++) {

		if (you != q[i]) {
			cout << "Error" << endl;
			return age();
		}
	}

		if (you == "������" && pc[r] == "�������" || you == 2 && pc == 1 || you == 1 && pc == 0) {
			cout << " You win!" << endl;
		}
		else if (you == pc) {
			cout << "�����!" << endl;
		}
		else {
			cout << "�� ��������!" << endl;
		}
		i++;
	}
}
	int main() {
	srand(time(NULL));
		setlocale(LC_ALL, "Russian");
		//cout << "������� �����, ��� 0 - ������� " << endl << "1 - ��� ������ " << endl << "2 ��� ������" << endl;
		//age();
		//cout << "You: " << you << endl << "Pc: " << pc << endl;
		// 
		int a = rand() % 3;

		cout << q[a];
		//string bot[3] = {"test","rom","uijjkjlljl;"};
		//char h[5] = { 't','e','s','t', '!'};
		//for (int i = 0; i < 3; i++) {

		//cout << a[i] << " ";
		//}

	}


