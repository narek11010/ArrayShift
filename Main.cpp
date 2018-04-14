#include <iostream>

void PrintShift(int n, int k)

{
	k = 1 - (k%n);
	for (int i = 0; i < n; ++i)
	{
		if ((n + k) % n == 0)
			std::cout << n << ' ';

		else
			std::cout << (n + k) % n << ' ';
		++k;
	}
	std::cout << '\n';
}

int main()
{
	int n , k ;
	std::cin >> n >> k;
	PrintShift(n, k);
	return 0;

}