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
int sum=0;
void pass(Tree a,int cnt)
{
	if(a->right==NULL&&a->left==NULL&&cnt!=0){
		sum+=a->k;
	}
	if(a->left!=NULL) pass(a->left,0);
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
		int pa,chi;
		char c;
		cin>>pa>>chi>>c;
		unordered_map<int,Tree>m;
		Tree root = creat(pa);
		if(c=='L'){
			root->left=creat(chi);
			m[chi]=root->left;
		}
		else{
			root->right=creat(chi);
			m[chi]=root->right;
		}
		m[pa]=root;
		for(int i=1;i<n;i++)
		{
			cin>>pa>>chi>>c;
			if(c=='L')
			{
				m[pa]->left=creat(chi);
				m[chi]=m[pa]->left;
			}
			else{
				m[pa]->right=creat(chi);
				m[chi]=m[pa]->right;
			}
		}
		sum=0;
		pass(root,0);
		cout<<sum<<endl;
	}
}
