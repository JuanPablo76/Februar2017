#include <iostream>
#include <windows.h>
using namespace std;
int main() {

	for (int i = 0; i < 10; i++)
		Beep(800+i*100, 400);
	for (int i = 10; i > 0; i--)
		Beep(800 + i * 100, 400);

	int WINAPI MessageBox(
		_In_opt_ HWND    hWnd,
		_In_opt_ LPCTSTR lpText,
		_In_opt_ LPCTSTR lpCaption,
		_In_     UINT    uType
	);

	cout << "Have a nice Day!" << endl;
}