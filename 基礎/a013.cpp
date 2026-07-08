#include <bits/stdc++.h>
using namespace std;

// 阿拉伯數字轉羅馬數字
string toRoman(int num) {
    // 使用 vector ?存羅馬數字對應的值和符號
    vector<pair<int, string>> roman = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    string result = "";
    for (auto& pair : roman) {
        while (num >= pair.first) {
            result += pair.second;
            num -= pair.first;
        }
    }
    return result;
}

// 羅馬數字轉阿拉伯?字
int toInt(const string& roman) {
    unordered_map<char, int> roman_map = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int prev_value = 0;
    for (int i = roman.size() - 1; i >= 0; --i) {
        char ch = roman[i];
        int value = roman_map[ch]; // 獲取對應字符的值
        if (value < prev_value) {
            total -= value;
        } else {
            total += value;
        }
        prev_value = value;
    }

    return total;
}

int main() {
    string line;
    while (getline(cin, line)) {
        if (line == "#") break;

        string roman1, roman2;
        int space_pos = line.find(' ');
        roman1 = line.substr(0, space_pos);
        roman2 = line.substr(space_pos + 1);

        int num1 = toInt(roman1);
        int num2 = toInt(roman2);
        
        int diff = abs(num1 - num2);

        if (diff == 0) {
            cout << "ZERO" << endl;
        } else {
            cout << toRoman(diff) << endl;
        }
    }
    return 0;
}
