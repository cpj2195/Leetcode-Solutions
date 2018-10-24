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




void inorder(struct Bnode*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}




struct Bnode*sorted_array_to_bst(int array[],int low, int high){



if(low>high){
    return NULL;
}
int m=low+(high-low)/2;

struct Bnode*root=NewNode(array[m]);
root->left=sorted_array_to_bst(array,low,m-1);
root->right=sorted_array_to_bst(array,m+1,high);
return root;
}




int main(){
    int array[]={1,4,7,13,18,43,56,58,89,99};
    int high=sizeof(array)/sizeof(array[0]);
    int low=0;
    // struct Bnode*root1=NULL;
    struct Bnode*root1=sorted_array_to_bst(array,low,high-1);
    inorder(root1);
}