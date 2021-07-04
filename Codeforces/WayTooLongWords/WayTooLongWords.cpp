#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	int num;
	cin >> num;
	vector<string> words;
	
	for(int i = 0; i < num; i++) {
		string word;
		cin >> word;
		words.push_back(word);
	}
	
	for(unsigned int i = 0; i < words.size(); i++) {
		if(words[i].size() > 10) {
			cout << words[i].substr(0,1) << words[i].size() - 2 << words[i].substr(words[i].size() - 1, 1) << "\n";
		} else {
			cout << words[i] << "\n";
		}
	}
}
