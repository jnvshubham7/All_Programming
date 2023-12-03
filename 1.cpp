#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string ArrayChallenge(vector<string> strArr) {
    string sequence = strArr[0];
    string dictionary = strArr[1];

    for (int i = 1; i < sequence.length(); ++i) {
        string first_word = sequence.substr(0, i);
        string second_word = sequence.substr(i);

        if (dictionary.find(first_word) != string::npos &&
            dictionary.find(second_word) != string::npos) {
            string result = first_word + "," + second_word;
            string final_output = "";
            
            for (int i = 0; i < result.length(); ++i) {
                final_output += (i % 3 != 2) ? result[i] : 'X';
            }

            return final_output;
        }
    }

    return "not possible";
}

int main() {
    // Examples
    cout << ArrayChallenge({"baseball", "a,all,b,ball,bas,base,cat,code,d,e,quit,z"}) << endl;
    cout << ArrayChallenge({"abcgefd", "a,ab,abc,abcg,b,c,dog,e,efd,zzzz"}) << endl;

    return 0;
}
