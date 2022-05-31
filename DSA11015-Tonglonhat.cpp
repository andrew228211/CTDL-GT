#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int data;
	Node* left;
	Node* right;
};
typedef Node* Tree;
Tree create(int x)
{
	Node* p = new Node;
	p->data=x;
	p->left=p->right=NULL;
	return p;
}
void kt(Tree &a,int par,int chi,char c)
{
	if(a!=NULL)
	{
		if(a->data==par)
		{
			if(c=='L')
			{
				a->left=create(chi);
			}
			else{
				a->right=create(chi);
			}
		}
		kt(a->left,par,chi,c);
		kt(a->right,par,chi,c);
	}
}
int Max=-1e7;
int ans(Tree a)
{
	if(a==NULL) return 0;
	int sum1=ans(a->left);
	int sum2=ans(a->right);
	if(!a->left&&!a->right) return a->data;
	if(!a->left) return a->data+sum2;
	if(!a->right) return a->data+sum1;
	if(a->left&&a->right)
	{
		Max=max(Max,a->data+sum1+sum2);
		return max(sum1,sum2)+a->data;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int par,chi;
		char c;
		cin>>par>>chi>>c;
		Tree Full = create(par);
		kt(Full,par,chi,c);
		for(int i=0;i<n-1;i++)
		{
			cin>>par>>chi>>c;
			kt(Full,par,chi,c);
		}
		Max=-1e7;
		ans(Full);
		cout<<Max<<endl;
	}
}
