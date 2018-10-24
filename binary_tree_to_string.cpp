#include"essentials.cpp"




void bt2str(struct bnode*root,string &test){
    

    if(root==NULL){
        return;
    }
    test.push_back(root->data+'0');

    if(!root->left && !root->right){
        return;
    }
    test.push_back('(');
    bt2str(root->left,test);
    test.push_back(')');

    if(root->right){
 test.push_back('(');
    bt2str(root->right,test);
    test.push_back(')');



    }







}



int main(){

struct bnode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
    string str = "";
    bt2str(root, str);
    cout << str;
    return 1;



}