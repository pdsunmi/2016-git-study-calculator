#include <iostream>

using namespace std;

int main()
{
	int a, b;
	char query;
	cin >> a >> b;
	cin >> query;
	switch(query)
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a*b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	case '%':
		cout << a%b << endl;
	}
}