#include<bits/stdc++.h>
using namespace std;
int chuaxet[1005];
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
	queue<Tree>q;
	q.push(a);
	while(!q.empty())
	{
		Tree x = q.front();
		q.pop();
		cout<<x->k<<" ";
		if(x->left!=NULL)
		{
			q.push(x->left);
		}
		if(x->right!=NULL)
		{
			q.push(x->right);
		}
	}
}
void kt(Tree &a,int parent,int child,char c)
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
		kt(a->left,parent,child,c);
		kt(a->right,parent,child,c);
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
		memset(chuaxet,0,sizeof(chuaxet));
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
