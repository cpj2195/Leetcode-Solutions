#include"essentials.cpp"

bool judgeSquareSum(int c) {
     
        vector<int>v1;
        if(c<0){
            return false;
        }
       
        int c1=floor(sqrt(c));
        cout<<c1<<endl;
        for(int i=0;i<=c1;i++){
            v1.push_back(i);
        }
        print_vector(v1);
        // for(int i=0;i<v1.size();i++){
        //     for(int j=i;j<v1.size();j++){
        //        int a=pow(v1[i],2);
        //        int b=pow(v1[j],2);
        //        if((a+b)==c){
        //            return true;
        //        }
        //     }
        // }

    int i=0;
    int j=v1.size()-1;
    while(i<=j){

        long long int a=pow(v1[i],2);
        long long int b=pow(v1[j],2);

        if(a+b<c){
            i++;
        }
        else if (a+b>c){
            j--;
        }
        else if ((a+b)==c){
            return true;
        }
          }

       
        return false;
    }


int main(){


int c=3;
cout<<judgeSquareSum(c)<<endl;
return 1;



}