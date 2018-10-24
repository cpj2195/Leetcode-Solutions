#include"essentials.cpp"
// here 0:wall
// here 1:source
// here 2:destination
// here 3:blank cell


bool check_if_path_exists(int maze[4][4],int x,int y)


{
    // cout<<x<<" "<<y<<endl;

   
    if(x<0 || x>=4 || y<0 || y>=4 || maze[x][y]==0){
        return false;
    }
    if(maze[x][y]==2 ){
        return true;
    }
    maze[x][y]=0;
    

    if(check_if_path_exists(maze,x+1,y) ||
    check_if_path_exists(maze,x-1,y) ||
    check_if_path_exists(maze,x,y+1) ||
    check_if_path_exists(maze,x,y-1))
    {
        return true;
    }
    else
        return false;
    





}












int main(){


int maze[4][4]={   { 0 , 3 , 1 , 0 },
                   { 3 , 0 , 0 , 3 },
                   { 2 , 3 , 0 , 3 },
                   { 0 , 3 , 3 , 3 }};





int x=0;
int y=2;
// cout<<maze[x+1][y+1]<<endl;
cout<<check_if_path_exists(maze, x, y);

return 1;



}











