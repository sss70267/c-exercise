#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i=0,sum=0;
	cout << "0~200為偶數的偶數:" ;
	while(i<=200)
	{
		if(i!=0 && i%2==0)
		{
			cout << i <<" ";
			sum+=i;
		}
		i++;
	}
	cout << "總合為:" << sum <<endl;
	system("pause");
	return 0; 
}

//牛刀小試 P5-28 第16題  while計算 2+4+6+8....+200之總和 
