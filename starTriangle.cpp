#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of rows";
	cin>>n;
	for(int j=1;j<=n+2;j++)
	{
		cout<<"*  ";
	}
	cout<<endl;
	for(int i=2;i<=n;i++)
	{
		 for(int j=1;j<=i-2;j++)
		 {
		 	cout<<"  ";
		 }
		 cout<<"  *";
		 
		 for(int k =1;k<=n-i;k++)
		 {
		 	cout<<"    ";
		 }
			if(i<n)
				cout<<" *";
		 
		 cout<<endl;
	}
	
		
	
	return 0;	
}
