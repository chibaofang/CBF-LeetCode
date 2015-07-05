#include<iostream>
#include<string>
using namespace std;
int main()
{
	string seq;
	int len;
	cout<<"please enther a string:"<<endl;
	cin>>seq;
	len = sizeof(seq);
	IsPalindrome(seq,len);
}
bool IsPalindrome(const char *s, int n)
{
	if(s==NULL || n<1)
	{
		return false;
	}
	char *front, *back;
	front=s; back=s+n-1;
	while(front<back)
	{
		if(*front != *back)
		{
			return false;
		}
		++front;
		--back;
	} 
	return true;
}
