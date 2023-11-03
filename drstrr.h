#include <iostream>
#include <string>

using namespace std;

class drstr {
public:
	string str;
	int conver_to_integer() {// conver to int
		return stoi(str);
	}
	float convert_to_float() { //covert to float 
		return stof(str);
	}
	void  compase_str( string str1) {// check equally
		int compase_answer = str.compare(str1);
		if (compase_answer == 0) {
			cout << "Strings equally" << endl;
		}
		else if (compase_answer != 0) {
			cout << "Strings not equally ";
		}
		
	}
	string get_substring() {// numb word in string
		cout << "Enter start and end Line :";
		int a = 0;
		int b = 0;
		cin >> a >> b;
		str.substr(a, b);
		return str;
	}
	size_t find( string find_info, int key) { // find word in string.Silent (Key = 0), Key = 1 enter in Console 
		if (key == 1) {
			if (str.find(find_info) == string::npos) {
				cout << "Not found" << endl;
			}
			else {
				cout << str.find(find_info);
			}
		}
		else if (key == 0) {

			if (str.find(find_info) == string::npos) {
				return -1;
			}

			return str.find(find_info);
		}
		else if (key != 1 || key != 0) {
			cout << "Error key" << endl;
		}
	}
	
	string add_in_end(string str1) {// paste in end
		return str.append(str1);
	}

	string add_in(string str1,int number) {// paste string in numb string
		return str.insert(number, str1);
	}
	void help() {
		cout << "call func example {drstr mystring; \n mystring.str = 20;\ strl.conver_to_string();\n}";
		cout << "conver_to_integer()::It's func convert to integer format (int)\n";
		cout << "conver_to_float()::It's func convert to float format \n";
		cout << "compase_str(str1)::It's func check first string and second string.Func get string which you need to find\n";
		cout << "conver_to_integer()::It's func convert to integer format (int)\n";
		cout << "find(str,key)::search It's string Silent (Key = 0), Key = 1 enter in Console\n ";
		cout << "add_in_end(str1)::It's func paste string in end\n";
		cout << "add_in(str1,number)::It's func paste string  to line number";
	}
	
};

