#include <bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str)
{
	string temp = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else
		{
			temp.push_back(str[i]);
		}
	}
	return temp;
}
string replaceSpaces1(string &str)
{
	int len = str.length();
	int spaces = 0;
	for(int i = 0 ; i < len;i++){
		if(str[i] == ' '){
			spaces++;
		}
	}
	int newLen = len + spaces * 2;
	str.resize(newLen);
	int i = len - 1; 
	int j = newLen - 1;
	while(i>=0){
		if(str[i] == ' '){
			str[j] = '0';
			str[j - 1] = '4';
			str[j - 2] = '@';
			j-=3;
		}else{
			str[j] = str[i];
			j--;
		}
		i--;
	}
	return str;
}
int main()
{
	string s = "This is a great way to do thing.";
	cout << replaceSpaces1(s);
}