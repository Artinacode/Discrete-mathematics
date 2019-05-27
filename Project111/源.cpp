#include <iostream>
using namespace std;
template<class numtype>
class Compare
{
public:
	Compare(numtype a, numtype b)
	{
		x = a;y = b;
	}
	numtype max()
	{
		return (x > y) ? x : y;
	}
	numtype min()
	{
		return (x < y) ? x : y;
	}
private:
	numtype x, y;
};
int main()
{
	Compare <int>a(4, 5);
	cout << a.max();
	cout << endl;
	cout << a.min();
}