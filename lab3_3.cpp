#include<iostream>
int main()
{
	using namespace std;
	int x=2,num;
	while (x<=69)
	{
		cout<< "1/"<<x<<"\n";
		num=num+x;
		x=x+1;
	}
	cout<<"= "<<1/num;
	return 0;
}
