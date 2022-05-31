#include<bits/stdc++.h>
using namespace std;
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
int find(int in[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(in[i]==x)
		{
			return i;
		}
	}
	return -1;
}
void kt(Tree &tmp,int in[],int lev[], int n)
{
	tmp = create(lev[0]);
	int k=find(in,n,lev[0]);
	int l[10005],r[10005];
	int x=0,y=0;
	for(int i=1;i<n;i++)
	{
		if(find(in,n,lev[i])<k) 
		{
			l[x++]=lev[i];
		}
		else r[y++]=lev[i];
	}
	if(k>0) kt(tmp->left,in,l,k);
	if(n-k-1>0) kt(tmp->right,in+k+1,r,n-k-1);
}
void pos(Node* a)
{
	if(a!=NULL)
	{
		pos(a->left);
		pos(a->right);
		cout<<a->data<<" ";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int in[100005],lev[100005];
		for(int i=0;i<n;i++) cin>>in[i];
		for(int i=0;i<n;i++) cin>>lev[i];
		Tree Full;
		kt(Full,in,lev,n);
		pos(Full);
		cout<<endl;
	}
}
