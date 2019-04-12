#include <iostream>
using namespace std;

int main(){
	cout << "구구단 입니다" << endl;
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
	}

	return 0;
}
