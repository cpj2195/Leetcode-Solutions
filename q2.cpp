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




void inorder(struct bnode*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}




struct bnode*sorted_array_to_bst(int array[],int low, int high){



if(low>high){
    return NULL;
}
int m=low+(high-low)/2;

struct bnode*root=newNode(array[m]);
root->left=sorted_array_to_bst(array,low,m-1);
root->right=sorted_array_to_bst(array,m+1,high);
return root;
}




int main(){
    int array[]={1,4,7,13,18,43,56,58,89,99};
    int high=sizeof(array)/sizeof(array[0]);
    int low=0;
    // struct bnode*root1=NULL;
    struct bnode*root1=sorted_array_to_bst(array,low,high-1);
    inorder(root1);
}