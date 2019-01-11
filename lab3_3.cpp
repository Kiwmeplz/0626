#include<iostream>
int main()
{
	using namespace std;
	int x=6,num;
	while (x<=19)
	{
		cout<< "1/"<<x<<"\n";
		num=num+x;
		x=x+1;
	}
	cout<<"= "<<1/num;
	return 0;
}
