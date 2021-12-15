#include"Tetris_settins.h"


istream& operator>>(istream& os, Tetris_settins& obj)
{
	os >> obj.error_code >> obj.indicator;
	return os;
}



ostream& operator<<(ostream& os, Tetris_settins& obj)
{
	os << obj.getError_code() << "\t" << obj.getIndicator();
	return os;
}