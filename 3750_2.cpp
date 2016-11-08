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

	map<int,int> s2;
	
	string str2;
	getline(cin,str2);

	stringstream ss2;
	ss2 << str2;

	int x2;

	while(ss2 >> x2){
		s2[x2]++;
	}


	map<int,int>::iterator it;

	int cnt = 0;

	for(it = s.begin(); it!=s.end(); ++it){
		if(s2[*it.first]>0){
			cnt++;	
		}
	}

	cout << cnt;



	return 0;
}