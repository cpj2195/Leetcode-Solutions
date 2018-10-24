#include"essentials.cpp"


bool compare_str(string v1,string v2){
int i;
vector<int> a1;
vector<int> a2;
for(i=0;i<256;++i){
    a1.push_back(0);
    a2.push_back(0);
}
if(v1.size()==v2.size()){
    for(i=0;i<v1.size();++i){
        int x= int(v1[i]);
        int y= int(v2[i]);
        a1[x]++;
        a2[y]++;
    }
    for (i=0;i<256;++i){
        if(a1[i]!=a2[i]){
            return false;
        }
    }
}
else if(v1.size()!=v2.size()){
    return false;
}

return true;

}





int main(){



// stack<int>s1,s2;

// int i,x;

// for (i=0;i<5;++i){
//     s1.push(i);
// }
// print_stack(s1);
// for(i=0;i<s1.size();++i){
//     x= s1.top();
//     s1.pop();
//     s2.push(x);
// }
// print_stack(s1);
if(compare_str("asdasd","dasasd")==true){
    cout<<"true";
}
else{
    cout<<"false";
}


return 0;
}








