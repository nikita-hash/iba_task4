#include<iostream>
#include<string>
#include"Tetris_settins.h"
#include<fstream>
#include<vector>
#include<windows.h>
using namespace std;
template<class T>
void readInfo(vector<T>& vec, string file);
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Tetris_settins tetris;
	vector<Tetris_settins>vecError;
	readInfo(vecError, "TaskIn4.txt");
	int acc = 0;
	int ch = 0;
	for (int i = 0; i < vecError.size(); i++) {
		if (vecError[i].getError_code() == "acc") {
			acc = acc + vecError[i].getIndicator();
			ch = 0;
		}
		if (vecError[i].getError_code() == "jmp") {
			i=i+ vecError[i].getIndicator()-1;
			ch++;
		}
		if (ch==4) {
			cout << acc << endl;
			i = vecError.size();
		}
	}
	system("pause");
}

template<class T>
void readInfo(vector<T>& vec, string file)
{
	ifstream file1;
	file1.open(file);
	if (file1.is_open()) {
		if (file1.peek() == 0) {}
		else {
			while (!file1.eof()) {
				T obj;
				file1 >> obj;
				vec.push_back(obj);
			}
		}
		file1.close();
	}
}
