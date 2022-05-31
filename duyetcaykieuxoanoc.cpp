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
void in(Tree a)
{
	stack<Tree>q1,q2;
	q1.push(a);
	while(!q1.empty()||!q2.empty())
	{
		while(!q1.empty())
		{
			Tree x=q1.top();
			q1.pop();
			cout<<x->k<<" ";
			if(x->right!=NULL) q2.push(x->right);
			if(x->left!=NULL) q2.push(x->left);
		}
		while(!q2.empty())
		{
			Tree x=q2.top();
			q2.pop();
			cout<<x->k<<" ";
			if(x->left!=NULL) q1.push(x->left);
			if(x->right!=NULL) q1.push(x->right);
		}
	}
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
		in(root);
		cout<<endl;
	}
}
