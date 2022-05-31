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
set<int>s;
void pass(Tree a,int cnt)
{
	if(a->left==NULL)
	{
		s.insert(cnt);		
	}
	if(a->right==NULL)
	{
		s.insert(cnt);
	}
	if(a->left!=NULL) pass(a->left,cnt+1);
	if(a->right!=NULL) pass(a->right,cnt+1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
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
		s.clear();
		pass(root,0);
		if(s.size()==1)
		{
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
}
