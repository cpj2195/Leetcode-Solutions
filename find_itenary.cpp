#include"essentials.cpp"


void printItinerary(map<string,string>mp1){


for(auto it:mp1){


if(mp1.count(it.second)==false){
    string starting_node=it.first;
    break;
}


cout<<it.first<<" "<<it.second<<endl;
string hello=it.second;
for(int i=0;i<mp1.size();i++){

if(mp1.count(hello)){
    
    cout<<hello<<" "<<mp1[hello]<<endl;
    hello=mp1[hello];

}




}







}








}






int main(){

map<string, string> dataSet;
    dataSet["Chennai"] = "Banglore";
    dataSet["Bombay"] = "Delhi";
    dataSet["Goa"] = "Chennai";
    dataSet["Delhi"] = "Goa";
 
    printItinerary(dataSet);
    return 1;




}