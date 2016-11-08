#include <map>
#include <iostream>

using namespace std;

int main(){

	map<int,int> m;


	m[5] = 7;
	m[0] = 1;
	m[1] = 6;

	
	map<int,int>::iterator it;

	for(it = m.begin(); it!=m.end(); ++it){
		cout << (*it).first << " "<< (*it).second << endl;
	}


	return 0;
}