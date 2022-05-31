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
	tree p = new Node;
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
vector<int>s;
void kt(tree &a)
{
	if(a!=NULL)
	{
		if(a->right==NULL&&a->left==NULL)
		{
			s.push_back(a->data);
		}
	//	cout<<a->data<<" ";
		kt(a->left);
		kt(a->right);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		s.clear();
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		tree root=creat(a[0]);
		for(int i=1;i<n;i++)
		{
			Add(root,a[i]);
		}
		kt(root);
		for(auto x:s)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
