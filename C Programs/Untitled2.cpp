#include <iostream>
#include <vector>

using namespace std;
int main(){
	vector<int> val1(3,1);
	vector<int> val2(1,5);
	val2=val1;
	val1=vector<int>();
	cout<<"Size of val1 "<<int(val1.size())<<'\n';
	cout<<"Size of val2 "<<int(val2.size())<<'\n';
	return 0;
}
