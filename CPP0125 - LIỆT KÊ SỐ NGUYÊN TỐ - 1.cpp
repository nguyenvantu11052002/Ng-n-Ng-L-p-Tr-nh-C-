#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	int a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	for(int i = a + 1; i < b; i++){
		if(snt(i)) cout << i << " ";
	}
}

int main(){
	inraketqua();
	return 0;
}

