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

	set<int> s2;
	
	string str2;
	getline(cin,str2);

	stringstream ss2;
	ss2 << str2;

	int x2;

	while(ss2 >> x2){
		s2.insert(x2);
	}


	set<int>::iterator it;

	int cnt = 0;

	for(it = s.begin(); it!=s.end(); ++it){
		if(s2.find(*it)!=s2.end()){
			cnt++;	
		}
	}

	cout << cnt;



	return 0;
}