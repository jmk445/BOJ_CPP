#include<iostream>
#include<cstdlib>

using namespace std;
int compare(const void* a, const void* b)
{
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}


int main() {
	int N,temp;
	
	cin >> N;
	int* temp_arr = new int[N];
	
	

	for (int i = 0; i < N; i++) {
		cin >> temp;		
		temp_arr[i] = temp;
	}
	
	qsort(temp_arr, N, sizeof(int),compare);

	for (int i = 0; i < N; i++)
		cout << temp_arr[i] << endl;

}