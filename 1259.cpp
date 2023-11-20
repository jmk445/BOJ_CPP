#include<iostream>
#include<vector>

using namespace std;


bool is_palindrome(int N) {
	int sum = 0, temp, r;
	temp = N;
	while (N > 0) //while ���� ���� ����.������ �Ǹ� Ż ��. ������ while�̰� ��Ҵµ� �ڱ� ������ �ȿ� �ִ°� ���� ���ȸ� �� ���� ���ִٰ� ��. while�̴� �ڱⰡ ���� ��� �͸� ǰ���ְ� �ͱ� ������"""
	{
		r = N % 10;
		sum = (sum * 10) + r;
		N = N / 10; //  /10 == �� �� ������, %10 == �� �� �̾Ƴ���.
					//  sum == reverse �� ����. temp�� ���� ����.
	}
	if (temp == sum)
		return true;
	else
		return false;
	
}

int main() {
	vector<int> arr;
	int N = 1;

	while (N > 0) {
		cin >> N;
		arr.push_back(N);
	}	

	for (int i = 0; i < arr.size() - 1 ; i++) {		
		if (is_palindrome(arr.at(i))) cout << "yes"<<endl;
		else cout << "no" << endl;
	}
	

}

