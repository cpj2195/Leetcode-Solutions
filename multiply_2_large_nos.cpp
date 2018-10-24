#include"essentials.cpp"
#include <string.h>

#include<stdio.h>
string add_2_large(string n1, string n2){


int carry=0;
int i=n1.length()-1;
int j=n2.length()-1;
string result="";

while(i>=0 && j>=0){
// result="";

int c=n1[i]-'0'+n2[j]-'0'+ carry;
// cout<<c<<endl;

if(c>=10){
c=c%10;
// cout<<c<<endl;
result=result+char(c+'0');
// cout<<result<<endl;
carry=1;


}
else{

// cout<<c<<endl;
result=result+char(c+'0');
// cout<<result<<endl;
carry=0;



}
// cout<<result<<endl;
i--;
j--;


}






if(i==-1 && j>0){

while(j>=0){

    result=result+n2[j];
    j--;
}
}


else if(i>0 && j==-1){

while(i>=0){

    result=result+n1[i];
    i--;
}



}




reverse(result.begin(),result.end());

return result;

}




void multiply_2(string n1, string n2){


int l1=n1.length();
int l2=n2.length();
reverse(n1.begin(),n1.end());
reverse(n2.begin(),n2.end());


string result="";
string temp="";

int array[l1+l2];


for(int i=0;i<l1+l2;i++){
    array[i]=0;
}



for(int i=0;i<l1;i++){
    for(int j=0;j<l2;j++){
        // int x=(n1[i]-'0')*(n2[j]-'0');
        
        array[i+j]+=(n1[i]-'0')*(n2[j]-'0');

    }
}


for(int i=0;i<l1+l2;i++){

int temp=array[i]/10;
array[i]=array[i]%10;
array[i+1]=array[i+1]+temp;


}


reverse(array,array+l1+l2);
print_array(array,l1+l2);

}













int main(){



string n1="123";
string n2="67884645";

multiply_2(n1,n2);

return 1;
}