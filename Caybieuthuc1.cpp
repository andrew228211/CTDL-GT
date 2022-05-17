#include<bits/stdc++.h>
using namespace std;
struct Node{
	char c;
	Node *left,*right;
};
typedef Node* Tree;
Tree creatNote(char c)
{
	Tree res=new Node;
	res->c=c;
	res->left=res->right=NULL;
	return res;
}
void order(Tree a)
{
	if(a!=NULL)
	{
		order(a->left);
		cout<<a->c;
		order(a->right);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<Tree>st;
		for(char &i:s)
		{
			if(i=='+' || i=='-'||i=='*'||i=='/' )
			{
				Tree tmp=creatNote(i);
				tmp->right=st.top();
				st.pop();
				tmp->left=st.top();
				st.pop();
				st.push(tmp);
			}
			else st.push(creatNote(i));
		}
		order(st.top());
		cout<<endl;
	}
}
