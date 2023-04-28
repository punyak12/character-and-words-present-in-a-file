#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
fstream fp;
main()
{
	char filename[20],str[20];
	int i,count=0,count1=0;
	cout<<"Enter filename\n";
	cin>>filename;
	fp.open(filename,ios::in);
	while(1)
	{
		fp>>str;
		count1=count1+1;
		if(fp.fail())
			break;
		cout<<str<<"\n";
		for(i=0;i<=strlen(str);i++)
			count=count+1;
	}
	cout<<"Number of characters :"<<count<<"\n";
	cout<<"Number of words :"<<count1-1<<"\n";
	fp.close();
}
