#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    unordered_map<char, int> freq;
    for(char ch : str){
        freq[ch]++;
    }
    cout << "Duplicate characters: ";
    for(auto it : freq){
        if(it.second > 1){
            cout << it.first << " ";
        }
    }
    return 0;
}

