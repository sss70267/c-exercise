#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
	int i,n=45,prime=45;
	for(i=2;i<prime;i++)
	{
    	if(prime%i==0)
		   
        	prime--;
        	continue;
		
	}
      
   cout << "小於" << n << "的最大質數為" << prime << endl;

   system("pause");
   return 0;
}
//p-5-30 牛刀小試21題 找出小於45最大的質數 


