#include<bits/stdc++.h>
using namespace std;
struct Node{
	int k;
	Node* left;
	Node* right;
};
typedef Node* Tree;
Tree creat(int x)
{
	Node* p =new Node;
	p->k=x;
	p->left=p->right=NULL;
	return p;
}
void kt(Tree a,int parent,int child,char c)
{
	if(a!=NULL)
	{
		if(a->k==parent)
		{
			if(c=='L')
			{
				a->left=creat(child);
			}
			else{
				a->right=creat(child);
			}
		}
		if(a->left!=NULL) kt(a->left,parent,child,c);
		if(a->right!=NULL) kt(a->right,parent,child,c);
	}
}
int d=1;
void pass(Tree &a, Tree &b)
{
	if(a->k!=b->k)
	{
		d=0;
	}
	if(a->left!=NULL&&b->left!=NULL)
	{
		pass(a->left,b->left);
	}
	if(a->right!=NULL&&b->right!=NULL)
	{
		pass(a->right,b->right);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		int parent,child;
		char c;
		Tree root;
		cin>>parent>>child>>c;
		root=creat(parent);
		kt(root,parent,child,c);
		for(int i=0;i<n-1;i++)
		{
			cin>>parent>>child>>c;
			kt(root,parent,child,c);	
		}
		cin>>m;
		Tree root2;
		cin>>parent>>child>>c;
		root2=creat(parent);
		kt(root,parent,child,c);
		for(int i=0;i<m-1;i++)
		{
			cin>>parent>>child>>c;
			kt(root2,parent,child,c);	
		}
		d=1;
		pass(root,root2);
		cout<<d<<endl;
	}
}
