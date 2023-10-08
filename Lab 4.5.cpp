#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	std::srand(static_cast<unsigned int>(std::time(nullptr))); // Сідування рандомайзера під данний час
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	for (int i = 0; i < 3; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (0 <= x && x <= 2 * R && 0 >= y && y >= -R || std::pow(x + R, 2) + std::pow(y - R, 2) <= std::pow(R, 2)) {

			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		x = 4 * static_cast<double>(std::rand()) / static_cast<double>(RAND_MAX) * R - 2 * R;
		y = 4 * static_cast<double>(std::rand()) / static_cast<double>(RAND_MAX) * R - 2 * R;
		if (0 <= x && x <= 2 * R && 0 >= y && y >= -R || std::pow(x + R, 2) + std::pow(y - R, 2) <= std::pow(R, 2)) {

			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	cin.get();
	return 0;
}