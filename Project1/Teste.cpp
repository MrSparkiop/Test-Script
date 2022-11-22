#include <iostream>

using namespace std;

void task2() {
    int rows, columns;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> columns;
    srand(time(NULL));
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[columns];
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 101 + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
	task2();
	return 0;
}