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
set<int>s;
void pass(Tree a,int cnt)
{
	if(a->left==NULL&&a->right==NULL)
	{
		s.insert(cnt);
	}
	else{
		if(a->left!=NULL) pass(a->left,cnt+1);
		if(a->right!=NULL) pass(a->right,cnt+1);
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
		s.clear();
		pass(Full,0);
		if(s.size()==1) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
