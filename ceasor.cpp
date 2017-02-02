#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	while(1)
	{
		char capital[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		char small[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		string c;
		int i,j,shift,x,choice,test;
		f:
		cout<<"Enter ur choice:->"<<endl;
		cout<<"1. Encrypt"<<endl;
		cout<<"2. Dcrypt"<<endl;
		cout<<"3. exit"<<endl;
		cin>>choice;
			while (!cin) 
	{
        cout<<"ERROR!! Enter a number"<<endl;
        cout<<"Opening Options--"<<endl;
        cout<<"Enter ur choice:->"<<endl;
		cout<<"1. Encrypt"<<endl;
		cout<<"2. Dcrypt"<<endl;
		cout<<"3. exit"<<endl;
        cin.clear();
        cin.ignore(10000,'\n');  
        cout<<endl;
        cin>>choice;
    }
    if(choice>=4||choice==0)
		{
			cout<<"ERROR!! Input from above sequence of digits only:"<<endl;
			goto f;
		}
		switch(choice)
			{	
					case 1:
					cin.ignore(10000,'\n');
					cout<<"Enter your plaintext:->";
					getline(cin,c);
					cout<<endl;
					cout<<"Enter shift also:->";
					cin>>shift;
					cout<<endl;
					cin.ignore(1000,'\n');
					cout<<"Encrypted text is:->";
					for(i=0;c[i]!='\0';i++)
					{
						for(j=0;j<26;j++)
						{
							if(c[i]==small[j])
							{
								x=(j+shift)%26;
								cout<<small[x];
							}
							else if(c[i]==capital[j])
							{
								x=(j+shift)%26;
								cout<<small[x];
							}
						}
					}
					cout<<endl;
					break;
					case 2:
						cin.ignore(10000,'\n');
					cout<<"Enter your ciphertext to get plaintext:->";
					getline(cin,c);
					cout<<endl;
					cout<<"Enter shift also:->";
					cin>>shift;
					cout<<endl;
					cin.ignore(1000,'\n');
						cout<<endl<<"Decrypted text is:->";
					for(i=0;c[i]!='\0';i++)
					{
						for(j=0;j<26;j++)
						{
							if(c[i]==small[j])
							{
								test=(j-shift);
								if(test<0)
								{
									test=-test;
								}
								x=test%26;
								cout<<small[x];
							}
							else if(c[i]==capital[j])
							{
								test=(j-shift);
								if(test<0)
								{
									test=-test;
								}
								x=test%26;
								cout<<small[x];
							}
						}
					}
					cout<<endl;
					break;
					case 3:
						{
							goto end;
						}
			}
	}end:
	return 0;
}
