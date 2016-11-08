#include <map>
#include <iostream>

using namespace std;

int main(){

	map<string,string> m;


	m["apple"] = "yabloko";
	m["pen"] = "ru4ka";
	m["school"] = "shkola";

	
	map<string,string>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " "<< (*it).second << endl;
	}

	string str;
	cin >> str;

	cout << m[str];


	return 0;
}