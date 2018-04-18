#include<iostream>
#include<string>
#include<sstream>
#include <stack>

using namespace std;

int main() {

	string eq;
	stringstream ss;
	char temp;
	stack<char> s;

	cout << "Unesite matematicki izraz: ";
	getline(cin, eq);
	ss << eq;
	while (ss >> temp) {
		if (temp == '(')
		{
			s.push(temp);
		}
		else if (temp == ')')
		{
			if (!s.empty())
			{
				if (s.top() == '(')
				{
					s.pop();
				}
			}
			else
			{
				cout << "Izraz nije ispravan!";
				return 1;
			}
		}
	}

	cout << endl;
	return 0;
}