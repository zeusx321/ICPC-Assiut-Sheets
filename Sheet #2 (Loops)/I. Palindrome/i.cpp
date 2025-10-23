#include <iostream>
using namespace std;

int main(){
	string num;
	
	cin >> num;

	string reverse = "";

	for (int i = num.length()-1; i >= 0; i--)
	{
		reverse += num[i];
	}

	for (int i = 0; i < num.length(); i++)
	{
		if (reverse[i] != '0') {
			reverse = reverse.substr(i);
			break;
		}
	}

	
	if(reverse[0]=='0'){
		cout << "0" << endl;
	}else{
		cout << reverse << endl;
	}
	
	if(reverse==num){
		cout << "YES";
	}else{
		cout << "NO";
	}

	return 0;
}