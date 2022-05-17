//Nathanael Kim, Evan Le
//program to allow the user to sort any number of light and dark colored disks in order from light to dark
#include <iostream>
using namespace std;

//0 represents light color, 1 represents dark color
void print(int n, char* disk) {
	for (int i = 0; i < 2 * n; i++) {

		if (disk[i] == '0')
			cout << "[L] "; //L is light

		else if (disk[i] == '1')
			cout << "[D] "; //D is dark
	}
}

int main() {
	int m, n, j, i;
	char* disk;
	m = 0;

	//ask the user for input
	cout << "Enter the amount of single color disks: " << endl;
	cin >> n;

	disk = new char[2 * n];

	//intital placement
	for (i = 0; i < n; i++) {

		disk[i * 2] = '1';
		disk[1 + 2 * i] = '0';
	}

	//print the original list of disks (pre-sorting)
	cout << "\nInitial list of disks: \n" << endl;
	print(n, disk);

	for (j = 0; j < (n/2) + 1; j++) {
		for (i = 2 * n - 1; i > 1; i--) { //moving the disks from right to left
			if (disk[i] < disk[i-1]) {

				m = m + 1; //increment variable m to count the number of swaps
				int result = disk[i];
				disk[i] = disk[i-1];

				disk[i-1] = result;
			}
		}
		for (i = 0; i < 2 * n - 1; i++) { //moving the disks from left to right
			if (disk[i] > disk[i+1]) {

				m = m + 1; //increment variable m to count the number of swaps
				int result = disk[i];
				disk[i] = disk[i+1];

				disk[i+1] = result;
			}
		}
	}


	//print the newly sorted list of disks
	cout << "\nList of disks after moving darks to the right: \n" << endl;
	print(n, disk);
	//print the number of swaps or number of moves
	cout << "\nNumber of swaps: " << m << endl << endl;

	//delete the variable disk
	delete[] disk;

	return 0;
}