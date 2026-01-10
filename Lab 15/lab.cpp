#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream fout;
	string S;
	fout.open("lab.txt");
	while(fout){
		getline(cin,S);
		if (S == "-1")
			break;
		fout << S << endl;
	}
	fout.close();

	ifstream fin;
	fin.open("lab.txt");
	while (fin) {
		getline(cin, S);
		cout << S << endl;
	}
	fin.close();

	return 0;
}
