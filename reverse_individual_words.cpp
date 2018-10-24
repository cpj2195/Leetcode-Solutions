#include"essentials.cpp"

void reverse_word(string &s,int low,int high){

while(low<high){

char temp=s[low];
s[low]=s[high];
s[high]=temp;
low++;
high--;



}


}





void reverse(string &s){

int i=0;

int high=0;


while(high<s.length()){


while(high<s.length() && s[high]!=' '){

high++;


}

reverse_word(s,i,high-1);
high++;
i=high;

}

// reverse_word(s,0,s.length()-1);


}












int main(){

string hi="Let's take LeetCode contest";

reverse(hi);


cout<<hi<<endl;
// cout<<hi[hi.length()-1];
return 1;










}