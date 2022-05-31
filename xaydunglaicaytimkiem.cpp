#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
typedef Node* tree;
tree creat(int x)
{
	tree p=new Node;
	p->data=x;
	p->left=p->right=NULL;
	return p;
}
void Add(tree &a,int x)
{
	if(a==NULL)
	{
		a=creat(x);
	}
	else{
		if(a->data>x)
		{
			Add(a->left,x);
		}
		else{
			Add(a->right,x);
		}
	}
}
void in(tree a)
{
	if(a!=NULL)
	{
		cout<<a->data<<" ";
		in(a->left);
		in(a->right);
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
		int s[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		tree a;
		a=creat(s[0]);
		for(int i=1;i<n;i++)
		{
			Add(a,s[i]);
		}
		in(a);
		cout<<endl;
	}
}
