#include<iostream>
#include<cstdlib>
using namespace std;

char board[3][3] = { '1','2','3','4','5','6','7','8','9' };
void printboard() {
	cout << board[0][0] << " |  " << board[0][1] << "  |  " << board[0][2] << endl;
	cout << "-------------" << endl;
	cout << board[1][0] << " |  " << board[1][1] << "  |  " << board[1][2] << endl;
	cout << "-------------" << endl;
	cout << board[2][0] << " |  " << board[2][1] << "  |  " << board[2][2] << endl;

}
bool check(char board[3][3], string name, string name2) {

	if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) {
		if (board[0][0] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name << " WINS" << endl;
		}
		else if (board[0][0] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		return true;

	}
	else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) {
		if (board[1][0] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name << " WINS" << endl;
		}
		else if (board[1][0] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		return true;

	}
	else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) {
		if (board[2][0] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name << " WINS" << endl;
		}
		else if (board[2][0] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		return true;

	}
	else if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) {
		if (board[1][0] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		else if (board[1][0] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		return true;

	}
	else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) {
		if (board[0][1] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name << " WINS" << endl;
		}
		else if (board[0][1] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}

		return true;

	}
	else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) {
		if (board[0][2] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name << " WINS" << endl;
		}
		else if (board[0][2] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		return true;


	}
	else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		if (board[0][0] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name << " WINS" << endl;
		}
		else if (board[0][0] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		return true;

	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
		if (board[0][2] == 'o') {
			cout << "GAME ENDED!" << endl;
			cout << name << " WINS" << endl;
		}
		else if (board[0][2] == 'x') {
			cout << "GAME ENDED!" << endl;
			cout << name2 << " WINS" << endl;
		}
		return true;

	}
	return false;


}
void inputboard(char board[3][3], int input, char symbol, int& count) {
	if (input == 1 && board[0][0] != 'o' && board[0][0] != 'x') {
		board[0][0] = symbol;
	}
	else if (input == 2 && board[0][1] != 'o' && board[0][1] != 'x') {
		board[0][1] = symbol;
	}
	else if (input == 3 && board[0][2] != 'o' && board[0][2] != 'x') {
		board[0][2] = symbol;
	}
	else if (input == 4 && board[1][0] != 'o' && board[1][0] != 'x') {
		board[1][0] = symbol;
	}
	else if (input == 5 && board[1][1] != 'o' && board[1][1] != 'x') {
		board[1][1] = symbol;
	}
	else if (input == 6 && board[1][2] != 'o' && board[1][2] != 'x') {
		board[1][2] = symbol;
	}
	else if (input == 7 && board[2][0] != 'o' && board[2][0] != 'x') {
		board[2][0] = symbol;
	}
	else if (input == 8 && board[2][1] != 'o' && board[2][1] != 'x') {
		board[2][1] = symbol;
	}
	else if (input == 9 && board[2][2] != 'o' && board[2][2] != 'x') {
		board[2][2] = symbol;
	}
	else {
		cout << "Error please enter a valid input " << endl;
		count--;
	}

}







int main() {

	string name1;
	string name2;
	int input = 0;
	char symbol1;
	char symbol2;
	cout << "Player 1: Enter your name" << endl;
	cin >> name1;
	cout << "Player 2: Enter your name" << endl;
	cin >> name2;
	cout << name1 << " Enter your symbol" << endl;
	cin >> symbol1;
	cout << name2 << " Enter your symbol" << endl;
	cin >> symbol2;

	int count = 0;
	while (!check(board, name1, name2) && count != 9) {
		printboard();
		cout << name1 << ":Enter the place value" << endl;
		cin >> input;
		count++;
		inputboard(board, input, symbol1, count);
		system("pause");
		system("CLS");
		printboard();
		if (check(board, name1, name2)) {
			printboard();
			break;
		}
		if (count == 9) {
			cout << "GAME ENDED!" << endl;
			cout << "ITS A DRAW" << endl;
			break;
		}
		cout << name2 << ":Enter the place value" << endl;
		cin >> input;
		count++;
		inputboard(board, input, symbol2, count);
		system("pause");
		system("CLS");

	}





}