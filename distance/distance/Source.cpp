#include <iostream>
#include <cmath>

using namespace std;

int main() {

	long x1, x2, y1, y2;
	cout << "Enter the coordinates of the first object: ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second object: ";
	cin >> x2 >> y2;

	long distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	cout << "Distance: " << distance;

	return 0;

}