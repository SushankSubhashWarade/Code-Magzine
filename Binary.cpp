#include <iostream>
using namespace std;

int binToDecimal(int biNum)
{
	int ans=0, pow=1;
	while(biNum>0)
	{
		int rem= biNum%2;
		
		ans+= (rem*pow);
		
		biNum /=10;
		pow *= 2;
	}
	return ans;
}

int main()
{
	cout<< binToDecimal(1010) << endl;
	return 0;
}
