#include"essentials.cpp"


int main(){

string array[4]={"900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"};
// string test="900 google.mail.com";
map<string,int>mp1;
// int j=test.length();

for (int i=0;i<4;i++){

    int number=0;
    string test="";
    int j=0;
   
    while(j<array[i].length() && isdigit(array[i][j])){
        number=number*10+(array[i][j]-'0');
        j++;

    }
    cout<<number<<endl;
    vector<string>v1;
    int x=array[i].length();
    string domain="";
    while(x>0){

        // string domain="";
        while(x>0 && array[i][x]!='.' && !isdigit(array[i][x]) && array[i][x]!=' ' ){
            domain+=array[i][x];
            x--;
            // cout<<domain<<endl;
        }
        // cout<<domain<<endl;
        // if(array[i][x]!=' ' || isdigit(array[i][x]))
        // domain+='.';
        reverse(domain.begin(),domain.end());
        cout<<domain<<endl;
       
        x--;
         if(x!=0)
        {
        domain.insert(0,".");
        mp1[domain]+=number;
        }
        reverse(domain.begin(),domain.end());
      



    }

}
for(auto it:mp1){
    cout<<it.first<<" "<<it.second<<endl;
}




return 1;



}



