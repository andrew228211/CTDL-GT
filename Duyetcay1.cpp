#include<bits/stdc++.h>
using namespace std;
int n;
int vitri(int inorder[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(inorder[i]==x)
		{
			return i;
		}
	}
	return -1;
}
void tinh(int inorder[],int preorder[],int n)
{
	int k=vitri(inorder,n,preorder[0]);
	if(k!=0)
	{
		//cout<<k<<endl;
		tinh(inorder,preorder+1,k);
	}
	if(k!=n-1)
	{
		//cout<<k<<endl;
		tinh(inorder+k+1,preorder+k+1,n-k-1);
	}
	cout<<preorder[0]<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int inorder[n+5];
		int preorder[n+5];	
		for(int i=0;i<n;i++)
		{
			cin>>inorder[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>preorder[i];
		}
		tinh(inorder,preorder,n);
		cout<<endl;
	}
}
