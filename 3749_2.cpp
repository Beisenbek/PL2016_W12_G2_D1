#include <map>
#include <iostream>
#include <sstream>

using namespace std;

int main(){

	map<int,int> s;
	
	string str;
	getline(cin,str);

	stringstream ss;
	ss << str;

	int x;

	while(ss >> x){
		s[x]++;
	}

	cout << s.size();


	return 0;
}