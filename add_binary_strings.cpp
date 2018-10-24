#include"essentials.cpp"

void make_equal_length(string &s1,string &s2){

int length1=s1.length();
int length2=s2.length();

reverse(s2.begin(),s2.end());
int diff=length1-length2;
for(int i=0;i<diff;i++ ){
 s2+='0';
}

reverse(s2.begin(),s2.end());



}
string add_binary(string a, string b){

int length1=a.length();
int length2=b.length();
int carry=0;
string result="";
if(length1>length2){
    make_equal_length(a,b);
}
else{
    make_equal_length(b,a);
}
cout<<a<<" "<<b<<endl;

for(int i=a.length()-1,j=b.length()-1;i>=0,j>=0;i--,j--){


    if(a[i]=='0' && b[i]=='0')
    {       
        if(carry==1)
        {result+='1';
        carry=0;}
        else{


                result+='0';
        }

        cout<<"1 :"<<result<<endl;

    }
    else if(a[i]=='1' && b[i]=='1'){
        if(carry==0){
            result+='0';
            carry=1;

        }
    else{
        result+='1';
        carry=1;
    }

    cout<<"2 :"<<result<<endl;

    }
    else if(a[i]=='1' && b[i]=='0'){

        if(carry==0){
                result+='1';


        }
        else{
            result+='0';
            carry=1;

        }

        cout<<"3 :"<<result<<endl;

    }
    else if(a[i]=='0' && b[i]=='1'){

        if(carry==0){
                result+='1';


        }
        else{
            result+='0';
            carry=1;

        }

        cout<<"4 :"<<result<<endl;

    }









}
if(carry==1)
result+=to_string(carry);

reverse(result.begin(),result.end());
return result;







}










int main(){

string a="1010";
string b="1011";
string result;
result=add_binary(a,b);
cout<<result<<endl;
cout<<a<<" "<<b<<endl;
return 1;


}