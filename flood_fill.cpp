#include"essentials.cpp"
#define N 8




void flood_fill(int matrix[N][N],int x,int y,int old,int new_colour){

    if(x<0 || x>=N || y<0 || y>=N){
        return;
    }
    if(matrix[x][y]==old){
        matrix[x][y]=new_colour;
    }
    else{
        return;
    }
    flood_fill(matrix,x+1,y,old,new_colour);
    flood_fill(matrix,x-1,y,old,new_colour);

    flood_fill(matrix,x,y+1,old,new_colour);
    flood_fill(matrix,x,y-1,old,new_colour);





}







int main(){

          int matrix[N][N]={{1, 1, 1, 1, 1, 1, 1, 1}, 
                      {1, 1, 1, 1, 1, 1, 0, 0}, 
                      {1, 0, 0, 1, 1, 0, 1, 1}, 
                      {1, 2, 2, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 2, 2, 0}, 
                      {1, 1, 1, 1, 1, 2, 1, 1}, 
                      {1, 1, 1, 1, 1, 2, 2, 1},}; 

    int x=4;
    int y=4;
    int old_color=2;
    int new_color=3;

flood_fill(matrix,x,y,old_color,new_color);

for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cout<<matrix[i][j]<<" ";

    }
    cout<<endl;
}

return 1;


}