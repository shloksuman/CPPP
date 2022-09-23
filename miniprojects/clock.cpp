
#include <iostream>
#include <windows.h>
#include <string>

void ClearScreen()
{
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;

	SetConsoleCursorPosition(hOut, Position);
}

int h, m, s, ms = 0;
std::string hS, mS, sS;

int main()
{	
	while (1)
	{
		if (s > 59) { s = 0; m++; }
		if (m > 59) { m = 0; h++; }
		if (h > 23) { h = 0; }

		hS = (h > 9) ? hS = std::to_string(h) : hS = "0" + std::to_string(h);
		mS = (m > 9) ? mS = std::to_string(m) : mS = "0" + std::to_string(m);
		sS = (s > 9) ? sS = std::to_string(s) : sS = "0" + std::to_string(s);

		std::cout << hS + "h:" + mS + "m:" + sS + "s";

		Sleep(1000);
		s++;

		ClearScreen();
	}
}