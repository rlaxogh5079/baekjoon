#include <iostream>
using namespace std;

int main() {
	const int king = 1;
	const int queen = 1;
	const int rook = 2;
	const int bishop = 2;
	const int knight = 2;
	const int pawn = 8;

	int input_king, input_queen, input_rook, input_bishop, input_knight, input_pawn;
	cin >> input_king >> input_queen >> input_rook >> input_bishop >> input_knight >> input_pawn;

	cout << king - input_king << " ";
	cout << queen - input_queen << " ";
	cout << rook - input_rook << " ";
	cout << bishop - input_bishop << " ";
	cout << knight - input_knight << " ";
	cout << pawn - input_pawn << endl;
}