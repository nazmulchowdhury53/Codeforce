/*
Name: Nazmul Chowdhury
ID: 0432310005101044
Section: 4A2
*/
#include <iostream>
#define N 9
using namespace std;
int grid[N][N];
bool isPresentInCol(int col, int num) {
    for (int row = 0; row < N; row++) {
        if (grid[row][col] == num) {
            return true;s
        }
    }
    return false;
}
bool isPresentInRow(int row, int num) {
    for (int col = 0; col < N; col++) {
        if (grid[row][col] == num) {
            return true;
        }
    }
    return false;
}
bool isPresentInBox(int boxStartRow, int boxStartCol, int num) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (grid[row + boxStartRow][col + boxStartCol] == num) {
                return true;
            }
        }
    }
    return false;
}
void printSudokuGrid() {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (col == 3 || col == 6) {
                cout << " | ";
            }
            cout << grid[row][col] << " ";
        }
        cout << endl;
        if (row == 2 || row == 5) {
            cout << "---------------------" << endl;
        }
    }
}
bool findEmptyPlace(int &row, int &col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}
bool isValidPlace(int row, int col, int num) {
    return !isPresentInRow(row, num) &&
           !isPresentInCol(col, num) &&
           !isPresentInBox(row - row % 3, col - col % 3, num);
}

bool solveSudoku() {
    int row, col;
    if (!findEmptyPlace(row, col)) {
        return true;
    }

    for (int num = 1; num <= 9; num++) {
        if (isValidPlace(row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku()) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}


int main() {
    cout << "Enter the Sudoku grid (use 0 for empty cells):" << endl;
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cin >> grid[row][col];
            if (grid[row][col] < 0 || grid[row][col] > 9) {
                cout << "Invalid input. Please enter numbers between 0 and 9." << endl;
                return 1;
            }
        }
    }

    if (solveSudoku()) {
        printSudokuGrid();
    } else {
        cout << "No solution exists";
    }

    return 0;
}
