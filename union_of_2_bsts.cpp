#include"essentials.cpp"



struct Bnode{
    int data;
    struct Bnode*right,*left;

};


struct Bnode*NewNode(int data){

struct Bnode*node=(struct Bnode*)malloc(sizeof(struct Bnode));
node->left=NULL;
node->right=NULL;
node->data=data;
return node;

}


void store_inorder(struct Bnode*root,int *array,int *i){

if(root==NULL){
    return;
}
else{
store_inorder(root->left,array,i);

array[*i]=root->data;
(*i)++;
store_inorder(root->right,array,i);
}



}


void union_bst(struct Bnode*root1,struct Bnode*root2){


int *array=new int[15];
int i=0;
store_inorder(root1,array,&i);

int *array1=new int[15];
int j=0;
store_inorder(root2,array1,&j);

int*array2=new int[30];
int x=0,y=0;
int z=0;

while(x<i && y<j){

if(array[x]<=array1[y]){
    array2[z]=array[x];
    z++;
    x++;
}


else if(array[x]>array1[y]){
    array2[z]=array1[y];
    y++;
    z++;
}

}

while(x<i){
    array2[z++]=array[x++];

}

while(y<j){
    array2[z++]=array1[y++];
}




int*array3=new int[5];
int p=0,q=0;
int r=0;

while(p<i && q<j){

if(array[p]<array1[q]){
    p++;

}

else if(array[p]>array1[q]){
    q++;
}

else

{
array3[r]=array[p];
// cout<<p<<en/dl;

r++;
p++;
q++;


}

}












print_array(array,i);
cout<<endl;
print_array(array1,j);

cout<<endl;
print_array(array2,i+j);
cout<<endl;
int size=sizeof(array3)/sizeof(array3[0]);
// cout<<size<<endl;
print_array(array3,size-1);
cout<<endl;



}



int main(){

struct Bnode *root = NewNode(38);
    root->left     = NewNode(30);
    root->right     = NewNode(56);
    root->left->right = NewNode(35);
    root->left->right->left = NewNode(32);
    root->left->right->right = NewNode(36);
    root->right->right = NewNode(60);
    root->right->left = NewNode(40);
    root->left->left=NewNode(20);


struct Bnode *root1 = NewNode(39);
    root1->left     = NewNode(31);
    root1->right     = NewNode(70);
    root1->left->right = NewNode(35);
    root1->left->right->left = NewNode(34);
    root1->left->right->right = NewNode(37);
    root1->right->right = NewNode(72);
    root1->right->left = NewNode(69);
    root1->left->left=NewNode(29);


union_bst(root,root1);
return 1;





}