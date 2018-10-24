#include"essentials.cpp"


bool check_possible_path(int maze[5][5]){

maze[0][0]=1;
    for(int i=1;i<5;i++){
        if(maze[0][i]!=-1){
            maze[0][i]=maze[0][i-1];
        }
    }

for(int i=1;i<5;i++){
        if(maze[i][0]!=-1){
            maze[i][0]=maze[i-1][0];
        }
    }


for(int i=1;i<5;i++){
    for(int j=1;j<5;j++){
        if(maze[i][j]!=-1){
        maze[i][j]=max(maze[i-1][j],maze[i][j-1]);
        }
    }
}

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<maze[i][j]<<" ";
    }
    cout<<endl;
}


if(maze[4][4]==-1){
    return false;
}
else{
    return true;
}


}




int main(){

int maze[5][5]={
                  { 0, 0, 0, -1, 0},
                  {-1, 0, 0, -1, -1},
                  { 0, 0, 0, -1, 0},
                  {-1, 0, -1,  0, 0},
                  { 0, 0, -1,  0, 0}
            };


cout<<check_possible_path(maze);


return 1;





}