#include<bits/stdc++.h>
using namespace std;
int n;
string s[1000];
struct Node{
	string data;
	Node* left;
	Node* right;
};
typedef Node* Tree;
Node* CreateNode(string data)
{
	Node* p = new Node;
	p->data=data;
	p->left=NULL;
	p->right=NULL;
	return p;
}
Node* Add(Tree a,int i)
{
	if(i<n)
	{
		a=CreateNode(s[i]);
		a->left=Add(a->left,i*2+1);
		a->right=Add(a->right,i*2+2);
	}
	return a;
}
int Tinh(Tree a)
{
	if(a->data!="+"&&a->data!="-"&&a->data!="*"&&a->data!="/")
	{
		return atoi(a->data.c_str());
	}
	if(a->data=="+")
	{
		return Tinh(a->left)+Tinh(a->right);
	}
	if(a->data=="-")
	{
		return Tinh(a->left)-Tinh(a->right);
	}
	if(a->data=="*")
	{
		return Tinh(a->left)*Tinh(a->right);
	}
	if(a->data=="/")
	{
		return Tinh(a->left)/Tinh(a->right);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		Tree Full;
		Full = Add(Full,0);	
		cout<<Tinh(Full)<<endl;
	}
}
