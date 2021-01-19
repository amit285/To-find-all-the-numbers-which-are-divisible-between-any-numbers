#include<iostream>
using namespace std;

int main()
{
	int n1,n2,e,s;
	cout<<"Enter the number you want divisibilty"<<endl;
	cin>>n1;
	cout<<"Enter the another number"<<endl;
	cin>>n2;
	cout<<"enter the starting point"<<endl;
	cin>>s;
	cout<<"Enter upto"<<endl;
	cin>>e;
	int count = 0;
	for(int i=s;i<=e;i++)
	{
		if(i%n1==0 && i%n2==0){
			cout<<i<<endl;
			count++;
		}
		//cout<<endl;
		
	}
	cout<<"total numbers are : " ;
	cout<<count;
}
