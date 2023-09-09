#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
string ans1="1",ans2="2";
int main(){
	ifstream fin("true.out",ios::in);
	fin>>ans1;
	fin.close();
	ifstream fin2("ans.out",ios::in);
	fin2>>ans2;
	fin2.close();
	if(ans1==ans2) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	system("pause");
	return 0;
}
