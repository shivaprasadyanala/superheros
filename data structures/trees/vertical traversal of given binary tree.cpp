 #include <iostream>
 using namespace std;
 struct node{
 	int data;
 	node* left;
 	node* right;
 };
 void findminmax(node* root,int* min,int* max,int hd){
 	if(root == NULL) return;
 	if(hd<*min) *min = hd;
 	else if(hd>*max) *max = hd;
 	findminmax(root->left,min,max,hd-1);
 	findminmax(root->right,min,max,hd+1);
 }
 void printverticallines(node* root,int lineno,int hd){
 	if(root ==NULL) return;
 	if(lineno == hd) cout<<root->data<<endl;
 	printverticallines(root->left,lineno,hd-1);
 	printverticallines(root->right,lineno,hd+1);
 }
 void printverticaltree(node* root)
 {
 	int min = 0;
 	int max = 0;
 	int hd = 0;
 	findminmax(root,&min,&max,hd);
 	for(int i = min;i<=max;i++){
 		printverticallines(root,i,hd);
	 }
 	
 }
 node* newnode(int data){
 	node* mynode = new node;
 	mynode->data = data;
 	mynode->left = NULL;
 	mynode->right = NULL;
 	return mynode;
 }
 main()
 {
 	struct node *root;
 	root = newnode(1);
 	root->left = newnode(2);
 	root->right = newnode(3);
 	root->left->left = newnode(4);
 	root->left->right = newnode(5);
 	root->right->right= newnode(6);
 	printverticaltree(root);
 }
