#include"essentials.cpp"





bool is_subsequence(string s1, string s2){


int j=0;
int i;
for(i=0;i<s2.length() && j<s1.length();i++){

if(s1[j]==s2[i]){
    j++;
}




}


cout<<j<<' '<<i<<endl;


return (j==s1.length());



}




int main(){



    string s1="abc";
    string s2="iadhsbdfrrjc";
    cout<<is_subsequence(s1,s2)<<endl;

    return 1;


}