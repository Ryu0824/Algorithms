#include<iostream>
using namespace std;

int main()
{
	int A, B, C = 0;
	int resultA, resultB, resultC, resultD = 0;

	cin >> A >> B >> C;

	resultA = (A + B) % C;
	resultB = ((A % C) + (B % C)) % C;
	resultC = (A * B) % C;
	resultD = ((A % C) * (B % C)) % C;

	cout << resultA << '\n';
	cout << resultB << '\n';
	cout << resultC << '\n';
	cout << resultD << '\n';

	return 0;
}