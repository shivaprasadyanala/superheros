 #include <iostream>
 using namespace std;
 struct node{
 	public:
 	node* left;
 	node* right;
 	int data;
 };
 int search(char in[],int instrt,int inend, int data)
 {
 	int i;
 	for(i = instrt;i<=inend;i++)
 	{
 		if(in[i] == data) return i;
	 }
 }
 node* newnode(char data){
 	node* n = new node();
 	n->data = data;
 	n->left = NULL;
 	n->right = NULL;
 	return n;
 }
 node* buildtree(char in[],char pre[],int instrt,int inend){
 	static int preindex = 0;
 	if(instrt > inend) return NULL;
 	node* tnode = newnode(pre[preindex++]);
 	if(instrt == inend) return tnode;
 	
 	int inIndex = search(in,instrt,inend,tnode->data);
 	
 	tnode->left = buildtree(in,pre,instrt,inIndex-1);
 	tnode->right = buildtree(in,pre,inIndex+1,inend);
// 	cout<<"hi";
    return tnode;
 }
 void printpostorder(node* root)
 {
 	if(root == NULL) return;
 	printpostorder(root->left);
 	printpostorder(root->right);
 	cout<<(char)root->data<<" ";
// 	cout<<"hi";
 }
 main()
 {
 	char pre[]={'a','b','d','e','c','f'};
    int post[]={'d','b','e','a','f','c'}; 	
    char ino[]={'d','b','e','a','f','c'};
    struct node* root = buildtree(ino,pre,0,6);
    printpostorder(root);
 }
