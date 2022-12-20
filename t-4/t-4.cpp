#include <iostream>

using namespace std;

char arr[4] = { '*','-','+','/' };
int a, b;
int ans;
int main()
{
	srand(time(0));
	char 부호=arr[rand() % 4];
	a = rand();
	b = rand();
	cout << a << ' ' << 부호 << ' ' << b << ' ' << '=';
	cin >> ans;
	
}