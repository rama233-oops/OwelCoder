#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[6]={1,2,3,1,1,2};
	map<int,int>mpp;
	for(int i=0;i<6;i++)
	{
	mpp[arr[i]]++;
	}
	/*for(auto itt:mpp)
	{
	cout<<itt.first<<" "<<itt.second<<" ";
	}*/

	map<int,pair<int,int>>dic1;
	dic1[1]=3//dic1={{1,3}};
	

}