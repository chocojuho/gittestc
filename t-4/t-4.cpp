#include <iostream>

using namespace std;

char arr[4] = { '*','-','+','/' };
int a, b;
int ans;
int cnt;
int main()
{
	while(true) {
		if (cnt == 10) {
			break;
		}
		srand(time(0));
		char 부호 = arr[rand() % 4];
		a = rand()%20 +1;
		b = rand()%20 +1;
		cout << '[' << cnt << ',' << 10 << ']' << ' ' << a << ' ' << 부호 << ' ' << b << ' ' << '=';
		cin >> ans;
	}
}