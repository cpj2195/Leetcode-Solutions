
#include"essentials.cpp"



int count_segments(string s){

 vector<string>v;
        for(int i=0;i<s.length();i++){
            string hello="";
            while(i<s.length() && (s[i]!=' ')){
                hello+=s[i];
                i++;
            }
            while(i<s.length() && s[i]==' '){
                    i++;
            }
            cout<<hello<<endl;
            if(hello.length()>0){
                  v.push_back(hello);}
                  if(isalpha(s[i])){
                          i--;
                  }
                //   while(i<s.length() && s[i]==' '){
                //       i++;
                //   }
        }   
        return v.size();

// int res = 0;
//         s.push_back(' ');
//         for(int i = 1; i < s.size(); ++i)
//           if(s[i] == ' ' && s[i-1] != ' ') 
//           {cout<<s[i-1]<<endl;
//               ++res;}
//         return res;
// }
}


int main(){


    string test="             ";
    cout<<count_segments(test)<<endl;
    return 1;

}