#include<bits/stdc++.h>
using namespace std;
void printpermutations(int n,int arr[],vector<vector<int>>&ds,vector<int>&ve,int vis[])
{
	if(ve.size()==n)
	{
	ds.push_back(ve);
	return;
	}
	for(int i=0;i<n;i++)
	{ 
	   if(vis[i]!=1)
	   {
	   vis[i]=1;
	     ve.push_back(arr[i]);
	     printpermutations(n,arr,ds,ve,vis);
	     vis[i]=0;
	     ve.pop_back();

	   }
 	} 
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	   cin>>arr[i];
	}
	int vis[n]={0};
	vector<int>ve;
	vector<vector<int>>ds;
	printpermutations(n,arr,ds,ve,vis);
	for(auto it:ds)
	{
	  for(auto itt:it)
	  {
	  cout<<itt<<" ";
	  }
	  cout<<endl;
	}
}