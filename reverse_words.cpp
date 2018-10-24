#include"essentials.cpp"

void reverse_word_string(string &s,int low,int high){
    while(low<high){
        char temp=s[low];
        s[low]=s[high];
        s[high]=temp;
        low++;
        high--;
    }
}

void reverseWords(string &s) {
        
        int i=0;

int high=0;


while(high<s.length()){


while(high<s.length() && s[high]!=' '){

high++;


}

reverse_word_string(s,i,high-1);
high++;
i=high;

}


}



int main(){
    string s="Let's take LeetCode contest";
    // reverse_word_string(s,0,s.length()-1);
    cout<<s<<endl;
    // cout<<s[26]<<endl;
    reverseWords(s);
    cout<<s<<endl;
    return 1;


}