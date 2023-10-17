#include<iostream>
using namespace std;
/*int main(){
	int arr[10];
	printf("%d",*arr+40-(*arr-(40)));
}*/
int &fun(){
	static int x=10;
	return x;
}


int main(){
	fun()=50;
	cout<<fun()<<endl;
	return 0;
}
