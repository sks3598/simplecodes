#include <bits/stdc++.h>
using namespace std;
string answerQuestion(string q)
{
	string a;
	if(q == "Please?") {
		a = "Okay!";
	}
	else {
		a = "You forgot the magic word!";
	}
	return a;
}
int main()
{
	cout<<answer("hi")<<endl;
	return 0;
}
    
