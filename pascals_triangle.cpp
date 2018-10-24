#include"essentials.cpp"

vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> v1(numRows);
        if(numRows==0){
            return v1;
        }
        if(numRows==1){
            v1[0].push_back(1);
            return v1;
            
        }
        else if(numRows==2){
            v1[0].push_back(1);
            v1[1].push_back(1);
            v1[1].push_back(1);
            return v1;
            
            
        }
        else if(numRows>2){
            v1[0].push_back(1);
            v1[1].push_back(1);
            v1[1].push_back(1);
            for(int i=2;i<numRows;i++){
                
                cout<<"hello"<<endl;
                int j=0;
                while(j<=i){
                    if(j==0 || j==i){
                        v1[i].push_back(1);
                    }
                    else{
                        
                        v1[i].push_back(v1[i-1][j-1]+v1[i-1][j]);
                        
                    }
                    j++;
                    
                    
                }
                
                
                
                
                
            }            
            
            
            
            
        }
        return v1;
        
        
    }


int main(){

int numRows=5;
vector<vector<int>>v1=generate(numRows);

return 1;





}