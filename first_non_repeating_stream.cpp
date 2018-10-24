#include "essentials.cpp"


void first_non_repeating(string test){


char* count=(char*)malloc(sizeof(int)*256);
queue<char>q;
for(int i=0;i<test.length();i++){
count[test[i]-'a']++;
q.push(test[i]);

while(!q.empty()){

if(count[q.front()-'a']==1){
    cout<<"first non repeating char is  "<<q.front()<<endl;
    break;
}
else if(count[q.front()-'a']>1)
{
    q.pop();
}


}
if(q.empty()){
cout<<"-1"<<endl;
}

}



}



int main(){

string test="aaaaabbbddgggggshhhhz";

first_non_repeating(test);
return 1;






}