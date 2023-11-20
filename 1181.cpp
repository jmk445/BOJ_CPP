/*#include<iostream>

using namespace std;

void quickSort(string* data, int start, int end) {
    if (start >= end) return;
    int pivot = start;  // ���� ��
    int i = start + 1;
    int j = end;

    while (i <= j) {
        while (data[i] <= data[pivot])  // Ű ������ ū �� ���������� ���������� �̵�
            i++;
        while (data[j] >= data[pivot] && j > start)  // Ű ������ ���� �� ���� ������ �������� �̵�
            j--;
        if (i > j)  //���� ������ ���¸� pivot �� ��ü
        {
            string temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }
        else {
            string temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
        // ��� ȣ��
        quickSort(data, start, j - 1);
        quickSort(data, j + 1, end);
    }


}


int main() {
    int N;

    cin >> N;

    string* words = new string[N];

    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }

    quickSort(words, 0, N - 1);


    for (int i = 0; i < N; i++) {

        cout << words[i] << endl;
    }


}*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main() {
    int N;
    vector<string> vec;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        if (find(vec.begin(), vec.end(), str) == vec.end())
            vec.push_back(str);
    }
    sort(vec.begin(), vec.end(), compareWith);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << '\n';
    }
}