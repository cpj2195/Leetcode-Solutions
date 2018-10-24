#include"essentials.cpp"

// #include<multimap>

struct TrieNode{

bool is_end;
struct TrieNode*edges[26];



};


struct TrieNode*get_node(){

struct TrieNode*temp=new TrieNode;
for(int i=0;i<26;i++){
    temp->edges[i]=NULL;
}
temp->is_end=false;
return temp;


}

void insert_trienode(struct TrieNode*root,string key){

struct TrieNode*temp=root;
for(int i=0;i<key.length();i++){

// cout<<key[i]<<endl;
int index=key[i]-'a';
// cout<<index<<endl;
if(!temp->edges[index]){
    temp->edges[index]=get_node();


}
temp=temp->edges[index];



}
temp->is_end=true;
}

bool search(struct TrieNode*root,string key){

struct TrieNode*temp=root;
for(int i=0;i<key.length();i++){


int index=key[i]-'a';
if(!temp->edges[index]){
    return false;
}
else{
    temp=temp->edges[index];
}



}
return(temp!=NULL && temp->is_end);

}


string get_max_matching_prefix(struct TrieNode*root,string key){

string key1="";
string hello;
for(int i=0;i<key.length();i++){

key1+=key[i];
int max_len=0;
// cout<<key1<<endl;
if(search(root,key1)){
    // cout<<"hello"<<endl;
    if(key1.length()>max_len){
        hello=key1;
        
            max_len=key1.length();
        
            }


}


}
return hello;


}



void display(struct TrieNode*root,string key){

if(root==NULL){
    return;
}



else{


for(int i=0;i<26;i++){


if(root->edges[i]){

    key+=i+'a';
    display(root->edges[i],key);
}



}

if(root->is_end){
    key+="\0";
    cout<<key<<endl;
    return;


}


}
}

bool is_leaf(TrieNode*root){
    return root->is_end!=false;
}


void traversePrint(TrieNode* root,char out[],int index)
{
     if(is_leaf(root))
        {
            out[index]='\0';
            cout << out << endl;
        }

        for(int i=0;i<26;i++)
        {
            if(root->edges[i])
            {
                out[index]='a'+i;
                traversePrint(root->edges[i],out,index+1);
            }
        }
        
    
}




void print_anagrmas_together(string words[],int size){


if(size==0){
    return;
}



else{

multimap<int,string>mp;

for(int i=0;i<size;i++){
int dex=0;
    for(int j=0;j<words[i].length();j++){


        dex+=words[i][j]-'a';
        
        

    }   
    // cout<<dex<<" "<<words[i]<<endl;
mp.insert({dex,words[i]});


}

for(auto it:mp){

    cout<<it.second<<endl;


}

}

}








void get_chars(){

string dict[]={"go","bat","me","eat","goal", 
                                "boy", "run"};
char arr[]={'e','o','b', 'a','m','g', 'l'};


int size=sizeof(dict)/sizeof(dict[0]);
int size1=sizeof(arr)/sizeof(arr[0]);

unordered_map<char,int>mp1;
for(int i=0;i<size1;i++){


mp1[arr[i]]++;



}


multimap<string,char>mp2;

for(int i=0;i<size;i++){
    string key="";
    for(int j=0;j<dict[i].length();j++){

        if(mp1.find(dict[i][j]) != mp1.end()){
                key+=dict[i][j];
        }
        else{
            key="";
            break;
        }




    }
    if(key!="")
    cout<<key<<endl;




}
return;
}


void get_camel_case_matching(){

string dict[] = {"Hi", "Hello", "HelloWorld",  "HiTech", "HiGeek", 
"HiTechWorld", "HiTechCity", "HiTechLab"};
int size=sizeof(dict)/sizeof(dict[0]);
string pattern1="HT";
string pattern2="H";
string pattern3="HTC";

unordered_multimap<string,string>mp1;
for(int i=0;i<size;i++){
string key="";
for(int j=0;j<dict[i].length();j++){
    if(isupper(dict[i][j])){
        key+=dict[i][j];
        mp1.insert({dict[i],key});
    }
    


}





}

for(auto it:mp1){

   if(it.second==pattern1){
       cout<<it.first<<endl;
   }

}
















}














int main(){



string words[]={"geeks","geekfor","geeky","geekness","hello","hellothere"};
string words1[]={"cat","tac","dog","god","act"};
int size=sizeof(words)/sizeof(words[0]);
int size1=sizeof(words1)/sizeof(words1[0]);

struct TrieNode*root=get_node();

for(int i=0;i<size;i++)
{

insert_trienode(root,words[i]);

}


// cout<<size1<<endl;
char out[20];
int index=0;
// get_chars();
get_camel_case_matching();
// print_anagrmas_together(words1,size1);

// string key="";
// display(root,key);
// traversePrint(root,out,0);



return 1;


}


