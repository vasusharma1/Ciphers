#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char capital[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int sum[1000]={0},i,j,x,y,count=0,b=0,q=0;
	string n;
	cout<<"enter plaintext";
	cin>>n;
	//converting small case into capital case
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]>=97&&n[i]<=122)
		{
			n[i]=n[i]-32;
		}
		q++;
	}
	int **a=0;
	a=new int *[q];
	for(i=0;i<q;i++)	//allocation of dynamic spaces
	{
		a[i]=new int[q];
	}	
	int *m=new int[q];	
	//extracting data from character array
	for(i=0;n[i]!='\0';i++)
	{
		for(j=0;j<26;j++)
		{
			if(n[i]==capital[j])
			{
				count++;
				m[count-1]=j;
			}
		}	
	}
	cout<<"enter your key for"<< n.length() << " x " <<n.length()<<" matrix "<<endl;
	for(i=0;i<n.length();i++)
	{
		cout<<"Row no->> "<<i<<endl;
		for(y=0;y<n.length();y++)
		{
			cin>>a[i][y];
		}
		cout<<endl;
	}
	//testing equility condition between word lenght and key size
	//multiple and add 2d matrix
	if(q%n.length()==0)
	{
		x=((q/2)-1);
		for(i=0;i<q;i++)
		{
			cout<<n[i]<<endl;
			b++;
				if(i==x)
				{
					j=x;
				}
				for(y=0,j=0;j<n.length(),y<n.length();y++,j++)
				{
					sum[b-1]=sum[b-1]+(a[i][y]*m[j]);
				}	
		}
	}
	cout<<"ciphered text is--> "<<endl;
	for(i=0;i<b;i++)
	{
		cout<<capital[sum[i]%26]<<endl;
	}
	return 0;
}
	
