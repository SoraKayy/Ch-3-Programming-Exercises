#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b;
	double c;
		
	cout << "Solving a(x)^2+ b(x) + c = 0 \n"; //title
	cout << "_____________________________ \n";

	cout << "Please enter 'a': "; //variable a
	cin >> a;
	cout << "\n";

	cout << "Please enter 'b': "; //variable b
	cin >> b;
	cout << "\n";

	cout << "Please enter 'c': "; //variable c
	cin >> c;
	cout << "\n";

	double ans = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a); //calculating with '+'
	double ans2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a); //calculating with '-'

	if (ans && ans2 < 0) //whether to print
		cout << "Error, there are no solutions \n";
	else
		cout << "There is a solution: " << ans << " and " << ans2 << "\n";

	return 0;
}
