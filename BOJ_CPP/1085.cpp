#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int x, y, w, h;

	cin >> x >> y >> w >> h;
	int arr[] = { x, y, w - x, h - y };
	pair<int*, int*> minmax = minmax_element(begin(arr), end(arr));

	cout << *(minmax.first);
	
}