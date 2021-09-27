#include<iostream>
using namespace std;
class complex
{
public:
	complex();
	~complex();
	void set_number(int n_1, int n_2)
	{
		a = n_1;
		b = n_2;
	}
	void print_number()
	{
		cout << "Your number is " << a << "+" << b << "i" << endl;
	}
	friend complex sum_complex(complex num_1, complex num_2);
private:
	int a = 0;
	int b = 0;
};

complex::complex()
{
}

complex::~complex()
{
}

complex sum_complex(complex num_1, complex num_2)
{
	complex num_3;
	num_3.set_number((num_1.a + num_2.a), (num_1.b + num_2.b));
	return num_3;
}

int main()
{
	complex c_1, c_2, sum;
	int p, q, r, s;
	cout << "Enter your x1 value : ";
	cin >> p;
	cout << "Enter your y1 value : ";
	cin >> q;
	cout << "Enter your x2 value : ";
	cin >> r;
	cout << "Enter your y2 value : ";
	cin >> s;
	c_1.set_number(p, q);
	c_2.set_number(r, s);
	c_1.print_number();
	c_2.print_number();
	sum = sum_complex(c_1, c_2);
	sum.print_number();
	return 0;
}