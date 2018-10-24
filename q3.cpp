#include"essentials.cpp"



struct bnode{
    int data;
    struct bnode*right,*left;

};


struct bnode*newNode(int data){

struct bnode*node=(struct bnode*)malloc(sizeof(struct bnode));
node->left=NULL;
node->right=NULL;
node->data=data;
return node;

}


void store_inorder(struct bnode*root,int *array,int *i){

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


void union_bst(struct bnode*root1,struct bnode*root2){


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

struct bnode *root = newNode(38);
    root->left     = newNode(30);
    root->right     = newNode(56);
    root->left->right = newNode(35);
    root->left->right->left = newNode(32);
    root->left->right->right = newNode(36);
    root->right->right = newNode(60);
    root->right->left = newNode(40);
    root->left->left=newNode(20);


struct bnode *root1 = newNode(39);
    root1->left     = newNode(31);
    root1->right     = newNode(70);
    root1->left->right = newNode(35);
    root1->left->right->left = newNode(34);
    root1->left->right->right = newNode(37);
    root1->right->right = newNode(72);
    root1->right->left = newNode(69);
    root1->left->left=newNode(29);


union_bst(root,root1);
return 1;





}