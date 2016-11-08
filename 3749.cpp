#include <set>
#include <iostream>
#include <sstream>

using namespace std;

int main(){

	set<int> s;
	
	string str;
	getline(cin,str);

	stringstream ss;
	ss << str;

	int x;

	while(ss >> x){
		s.insert(x);
	}

	cout << s.size();


	return 0;
}