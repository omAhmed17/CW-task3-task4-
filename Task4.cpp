#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isAnagram(string word1, string word2) {
    if (word1.size() != word2.size())
    {
        return false;
    }


    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    return word1 == word2;
}

int main() {
    string w1, w2;

    cout << "Enter first word: ";
    cin >> w1;

    cout << "Enter second word: ";
    cin >> w2;

    if (isAnagram(w1, w2)) {
        cout << "They are anagrams." << endl;
    }
    else {
        cout << "They are NOT anagrams." << endl;
    }

    return 0;
}
