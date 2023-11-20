#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

int task1(int** Arr, int k, int row, int col);
void task2(char str[], char c);
void task3(float** Arr, int row, int col);

void main() {
	int choise = 5;
	do {

		cin >> choise;
		switch (choise) {

		case 1: {
			int N, M, k, i, j;
			int** Array;
			cout << "n,m: ";
			cin >> N >> M;
			cout << "k: ";
			cin >> k;
			Array = new int* [N];
			for (i = 0; i < N; i++) {
				Array[i] = new int[M];
			}
			for (i = 0; i < N; i++) {
				for (j = 0; j < M; j++) {
					cin >> *(*(Array + i) + j);
				}
			}
			for (i = 0; i < N; i++) {
				cout << endl;
				for (j = 0; j < M; j++) {
					cout << *(*(Array + i) + j) << "  ";
				}
			}
			cout << endl;
			cout << "cols: " << task1(Array, k, N, M) << endl;
			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}

		case 2: {
			char str[20];
			char c;
			cout << "s: " << endl;
			cin >> str;
			cout << "c: ";
			cin >> c;
			task2(str, c);
			break;
		}

		case 3: {
			int N, M, i, j;
			float** Array;
			cout << "n,m: ";
			cin >> N >> M;
			Array = new float* [N];
			for (i = 0; i < N; i++) {
				Array[i] = new float[M];
			}
			for (i = 0; i < N; i++) {
				for (j = 0; j < M; j++) {
					cin >> *(*(Array + i) + j);
				}
			}
			for (i = 0; i < N; i++) {
				cout << endl;
				for (j = 0; j < M; j++) {
					cout << *(*(Array + i) + j) << "  ";
				}
			}
			cout << endl;
			task3(Array, N, M);
			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}
		case 4: {break; }
		}
	} while (choise != 4);
}

int task1(int** Arr, int k, int row, int col) {
	int i, j;
	int col_num = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == k) {
				col_num = j;
			}
		}
	}
	return col_num;
}
void task2(char str[], char c) {
	int i;
	int length = strlen(str);
	for (i = 0; i < length; i++) {
		cout << *(str + i);
		if (*(str + i) == c) {
			cout << "*";
		}
	}
}
void task3(float** Arr, int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == 0)
				break;
			*(*(Arr + i) + j) += 1;
		}
	}
	cout << "Edited:";
	for (i = 0; i < row; i++) {
		cout << endl;
		for (j = 0; j < col; j++) {
			cout << *(*(Arr + i) + j) << " ";
		}
	}
}