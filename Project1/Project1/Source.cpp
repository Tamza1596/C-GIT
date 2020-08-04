#include<iostream>
using namespace std;
int main() {
	int a, b, small, lar;
	cout << "Input number A : ";
	cin >> a;
	cout << "Input number B : ";
	cin >> b;
	cout << "largest = " << ((a > b&& b < a) ? lar = a : lar = b) << endl;
	cout << "smallest = " << ((a<b && b>a) ? lar = a : lar = b) << endl;

}