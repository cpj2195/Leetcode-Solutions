#include"essentials.cpp"


bool check_ip(string ip){

int dots=0;
int i=0;
int l=ip.length();
if(ip[i]=='.'){
    cout<<"hi1"<<endl;
    return false;
}

while(i<l){

int num=0;

while( i<l && ip[i]!='.'){

char c=ip[i++];
if(c<'0' || c>'9'){
    return false;
}

num=(num*10)+(c-'0');


}
if(i<l){
    ++dots;
}
if(dots>3 || num<0 || num>255){
    cout<<"hi3"<<endl;
    return false;
}
++i;



}



if(dots!=3){
    cout<<"hi4"<<endl;
    return false;
}
else{
    return true;
}

}


int main(){
	// char ip1[] = "128.0.0.1";
    // char ip2[] = "125.16.100.1";
    // char ip3[] = "125.512.100.1";
    // char ip4[] = "125.512.100.abc";
    string ip5="128.212.145.123";
    string ip6="256.123.12.110";

    check_ip(ip6)? printf("Valid\n"): printf("Not valid\n");

    return 0;
}





