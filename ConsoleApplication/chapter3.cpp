
#include <iostream>
#include <string>
#include <vector>

//#define DEBUG

using namespace std;

int main() {
	// 3.2
	//string line;
	//while (getline(cin, line)) {
	//	cout << line << endl;
	//}
	//return 0;

	// 3.2.1
	/*string line;
	while (cin >> line) {
		cout << line << endl;
	}*/

	// 3.4
	//string line1;
	//string line2;
	//while (cin >> line1 >> line2) {
	//	if (line1 == line2) {
	//		cout << "They are the same " << endl;
	//	}
	//	else if(line1.size() > line2.size()) {
	//		cout << "line 1 is bigger " << endl;
	//	}
	//}

	// 3.5
	/*string result;
	string line;*/
	/*while (getline(cin, line)) {
		result += line;
	}
	cout << "The result is : " + result << endl;*/

	//while (cin >> line) {
	//	if (result.empty()) {
	//		result = line;
	//	}
	//	else {
	//		result += " " + line;
	//	}
	//}
	//cout << result << endl;

	// 3.14
	//vector<int> inputs;
	//int input = 0;
	//while (cin >> input) {
	//	inputs.push_back(input);
	//}

	//for (int i = 0; i < inputs.size(); i++) {
	//	cout << inputs.at(i) << endl;
	//}

	// 3.15
	vector<string> stringsVec;
	string stringsInput = "";
	while (cin >> stringsInput) {
		stringsVec.push_back(stringsInput);
	}

	for (int i = 0; i < stringsVec.size(); i++) {
		cout << stringsVec.at(i) << endl;
	}

}