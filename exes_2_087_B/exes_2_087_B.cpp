#include <iostream>
using namespace std;

int seis[119]; // Array to be searched
int n; // Number of element in the array
int i; // Index of array element

void input() {
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 119))
			break;
		else
			cout << "\nArray should have minimum 1 and maksimum 119 elements.\n\n";
	}

	// Accept array elements
	cout << "\n====================\n";
	cout << "Enter array elements\n";
	cout << "====================\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> seis[i];
	}
}

void algorithm() {
	cout << "\nEnter the element you want to search : ";
	int item;
	cin >> item;

	int wisnu, seisno, mid;
	wisnu = 0;
	seisno = n - 1;
	mid = (wisnu + seisno) / 2;

	if (seis[mid] = item) {
		cout << "\n" << item << " found at position " << (mid + 1);
	}

	if (item < seis[mid]) {
		cout << "\n" << item << " found at position " << (mid - 2) << endl;
	}

	if (item > seis[mid]) {
		cout << "\n" << item << " found at position " << (mid + 2) << endl;
	}
}

int main() {
	input();
	algorithm();
}