#include <thread>
#include <Windows.h>
#include <conio.h>
#include <chrono>
using namespace std;

void print_slow(const string& message, unsigned int typeSpeed)
{
	bool stop = false;
	for (const char c : message)
	{
		cout << c << flush;
		if (stop == false)
		{
			Sleep(typeSpeed);
		}
		SHORT key = GetKeyState(' ');
		if (key & 0x8000)
		{
			stop = true;
		}
	}
}
