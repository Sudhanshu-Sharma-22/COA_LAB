#include<bits/stdc++.h>
using namespace std;
int sumofbits(string str)
{
	int answer =0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='0')
		continue;
		else answer++;
		
	}
	return answer;
	
}
int main()
{
	string str;
	cin>>str;
	cout<<sumofbits(str);
	return 0;
}
