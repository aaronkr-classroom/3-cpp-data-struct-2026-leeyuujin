#include <iostream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

int main() {
    string input;
    cout << "문장을 입력하세요: ";
    getline(cin, input);

    stringstream ss(input);
    string word;

    int maxLen = 0;
    int minLen = numeric_limits<int>::max();

    while (ss >> word) {
        int len = word.length();

        if (len > maxLen)
            maxLen = len;

        if (len < minLen)
            minLen = len;
    }

    if (maxLen == 0) {
        cout << "입력된 단어가 없습니다." << endl;
    }
    else {
        cout << "가장 긴 단어 길이: " << maxLen << endl;
        cout << "가장 짧은 단어 길이: " << minLen << endl;
    }

    return 0;
}