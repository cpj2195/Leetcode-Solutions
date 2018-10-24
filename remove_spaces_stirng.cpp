#include"essentials.cpp"


void remove_spaces(string &hi){


int i=0;
for(int j=0;j<hi.length();j++){
if(hi[j]!=' '){


   hi[i++]=hi[j];
}



}
// cout<<hi<<endl;

// hi.erase(i,hi.length());
for(int k=i;k<hi.length();k++){
    hi[k]='\0';
}
cout<<hi<<endl;


}




int main(){

// string hi="    g   e  ek    s for geeks       ";
string hi2="    g   e e k    s";
remove_spaces(hi2);
// cout<<hi2<<endl;
return 1;




}