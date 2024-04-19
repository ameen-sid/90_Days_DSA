#include<iostream>
using namespace std;

int main() {
	string name;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Length of string: " << name.length() << endl;

	// empty string
	string emp = "";
	cout << "String is empty or not: " << name.empty() << endl;

	cout << "char at 0th position: " << name.at(0) << endl;
	cout << "First char of string: " << name.front() << endl;
	cout << "Last char of string: " << name.back() << endl;

	string str1 = "My";
	string str2 = "Name";

	// append
	str1.append(str2);
	cout << "Appended string: " << str1 << endl;

	string desc = "This is a char";
	desc.erase(4, 3);
	cout << "Erased String: " << desc << endl;

	string name1 = "Ameen 7";
	string middle = "Sid ";

	name1.insert(6, middle);
	cout << "Printing after inserting in middle of string: " << name1 << endl;

	string str3 = "Ameen";
	cout << "Name: " << str3 << endl;
	str3.push_back('R');
	cout << "Name after push_back: " << str3 << endl;
	str3.pop_back();
	cout << "Name after pop_back: " << str3 << endl;

	string str4 = "yaar tera superstar desi kalakaar";
	string str5 = "star";

	if (str4.find(str5) == string::npos) {
		// not found
		cout << "Not Found" << endl;
	}
	else {
		cout << "Found" << endl;
	}

	string str6 = "sid";
	string str7 = "Sid";

	if (str6.compare(str7) == 0) {
		cout << "Matching" << endl;
	}
	else {
		cout << "Not Matching" << endl;
	}

	string str8 = "This is a car, big daddy of all SUVs";
	cout << str8.substr(19, 5) << endl;

	return 0;
}