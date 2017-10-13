#include <iostream>
#include <fstream>
#include <regex>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string input;
	if (!(argc > 1))
	{
		cout << "Not console argument (The path to the file)." << endl;
		cout << "Please enter the path to the file." << endl;
		cin >> input;
	}
	else input = argv[1];
	fstream f_in(input, ios::in);
	istreambuf_iterator<char> beg(f_in), end;
	string str(beg, end);
	if (str == "")
	{
		cout << "Error (Incorrect path or file is empty)." << endl;
		return 0;
	}
	f_in.close();
	string pattern("(/\\*([^*]|[\r\n]|(\\*+([^*/]|[\r\n])))*\\*+/)|(//.*)");
	regex r(pattern, regex_constants::egrep);
	str = regex_replace(str, r, "");
	fstream f_out(input, ios::out | ios::trunc);
	f_out << str;
	f_out.close();
	cout << "Comments removed." << endl;
	system("pause");
	return 0;
}

