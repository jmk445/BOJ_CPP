#include<iostream>
#include<string>

using namespace std;

int get_max_char_idx(string word) {
	int max_idx = 0;
	char max_char = word[0];
	char test;

	for (int i = 0; i < word.size() / sizeof(char); i++) {
		if (max_char < word[i]) {
			max_char = word[i];
			max_idx = i;
		}
	}

	return max_idx;
}

void find_index(string word) {
	int first_index = get_max_char_idx(word);
	int second_index;
	int last_index = word.size() / sizeof(char) - 1;
	

	if (get_max_char_idx(word) == 0) {
		word.erase(0, 1);
		first_index = get_max_char_idx(word);
	}
	else if (get_max_char_idx(word) == last_index) {
		word.erase(last_index, 1);
	}
	else {
		word.erase(word.size() / sizeof(char) - 1);	
	}


}


int main() {
	string word;
	
	cin >> word;

	
	find_index(word);

}