#include<iostream>
#include<vector>

using namespace std;


bool is_palindrome(int N) {
	int sum = 0, temp, r;
	temp = N;
	while (N > 0) //while 안이 참일 동안.거짓이 되면 탈 출. 옛날에 while이가 살았는데 자기 엉덩이 안에 있는게 맞을 동안만 들어가 있을 수있다고 함. while이는 자기가 맘에 드는 것만 품고있고 싶기 때문에"""
	{
		r = N % 10;
		sum = (sum * 10) + r;
		N = N / 10; //  /10 == 맨 뒤 날리기, %10 == 맨 뒤 뽑아내기.
					//  sum == reverse 된 숫자. temp는 원래 숫자.
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

