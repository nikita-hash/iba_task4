#pragma once
#include<iostream>
#include<string>
using namespace std;
class Tetris_settins {
	string error_code;
	int indicator;
public:
	void setError_code(string error_code) { this->error_code = error_code; }
	void setInicator(int indicator) { this->indicator = indicator; }
	string getError_code() { return error_code; }
	int getIndicator() { return indicator; }
	friend istream& operator>>(istream& os, Tetris_settins& obj);
	friend ostream& operator<<(ostream& os, Tetris_settins& obj);
};
