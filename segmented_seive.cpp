#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
	if((n%i)==0)
	{
	return false;
	}
	}
	return true;
}
int main()
{
	int l,r;
	cin>>l>>r;
	int i=2;
	vector<int>primes;

	while(i<=r)
	{
        if (isprime(i))
        {
        primes.push_back(i);
        }
        i=i+1;
	}
	/*for(int j=0;j<primes.size();j++)
	{
		cout<<primes[j]<<" ";
	}*/
	cout<<endl;
	vector<int>seive(r-l+1,1);
	
	
	for(auto it:primes)
	{
		int firstmul=(((l/it)*it)<l?((l/it)+1)*it:(l/it)*it);
		//cout<<firstmul<<" ";
		
		for(int j=max(firstmul,it*it);j<=r;j+=it)//j=0 2 
		{
			
			seive[j-l]=0;
		}
	}
cout<<endl;
int pro=1;
for(int j=0;j<seive.size();j++)
{
	cout<<seive[j]<<" ";
	if(seive[j]==1)
	{
		pro*=j+l;
	}
	

}
cout<<pro;


	




	

}