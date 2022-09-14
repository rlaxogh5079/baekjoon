#include <iostream>
using namespace std;

class Person {
public:
	int weight, height;

	void input_info() {
		cin >> weight >> height;
	}
};

int main() {
	int size;
	cin >> size;
	Person* arr = new Person[size];
	int* ranks = new int[size];
	fill_n(ranks, size, 1);

	for (int i = 0; i < size; i++) {
		arr[i].input_info();
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i].height < arr[j].height && arr[i].weight < arr[j].weight) {
				ranks[i] += 1;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << ranks[i] << " ";
	}
}