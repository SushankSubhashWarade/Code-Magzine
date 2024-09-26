#include <iostream>
using namespace std;
int main()

{
	int a, b;

	cout << "enter a:" << endl;
	cin >> a;

	cout << "enter b:" << endl;
	cin >> b;

	int sum = a + b;
	int diff = a - b;
	int prod = a * b;
	int div = a / b;
	int modulo = a % b;

	cout << "sum=" << sum << endl;
	cout << "diff=" << diff << endl;
	cout << "prod=" << prod << endl;
	cout << "div=" << div << endl;
	cout << "modulo=" << modulo << endl;
}
