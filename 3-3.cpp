#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string input;
    cout << "문장을 입력하세요: ";
    getline(cin, input);

    map<string, int> wordCount;
    stringstream ss(input);
    string word;

    // 단어 분리 및 카운트
    while (ss >> word) {
        wordCount[word]++;
    }

    // 결과 출력
    cout << "\n단어별 등장 횟수:\n";
    for (auto& pair : wordCount) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}