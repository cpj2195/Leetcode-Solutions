#include"essentials.cpp"

int max1(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}


int main(){

string array[17]={"k","lg","it","oidd","oid","oiddm","kfk","y","mw","kf","l","o","mwaqz","oi","ych","m","mwa"};
sort(array,array+7);
map<string,int>mp1;
for(int i=0;i<17;i++){


    mp1[array[i]]++;

}
int res_len=0;
set<string>v1;
set<int>v2;
for(int i=0;i<17;i++){

string word=array[i];
for(int j=0;j<word.length();j++){

    string prefix=word.substr(0,j+1);
    if(mp1.find(prefix)==mp1.end()){
        v1.insert(word);
        cout<<"word is "<<word<<endl;
        break;

    }
   

res_len=max1(res_len,word.length());
    
}
v1.insert(word);


}

cout<<res_len<<endl;
cout<<endl;
for(auto it:v1)
{
    if(it.length()==res_len){
        cout<<"hello "<<it<<endl;
        break;
    }
}


// vector<int>v2;


return 1;
}