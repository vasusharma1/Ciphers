#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char capital[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char small[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char c[100];
	int i,j,shift,x,a,b;
	cout<<"Enter your plaintext:->";
	cin>>c;
	cout<<endl;
	cout<<"Enter key numeric 'a' and 'b':->";
	cin>>a>>b;
	cout<<"Encrypted text is:->";
	for(i=0;c[i]!='\0';i++)
	{
		for(j=0;j<26;j++)
		{
			if(c[i]==small[j])
			{
				x=((a*j)+b)%26;
				cout<<small[x];
			}
			else if(c[i]==capital[j])
			{
				x=((a*j)+b)%26;
				cout<<small[x];
			}
		}
	}
	cout<<endl;
	return 0;
}
