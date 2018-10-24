#include"essentials.cpp"
#define N 10

struct Point{

int x;
int y;

};
struct Node{

Point x;
int dist;

};

bool is_cell_safe(int i,int j){

return(i<N && i>=0 && j<N && j>=0);
}

int rows[]={0,-1,1,0};
int cols[]={1,0,0,-1};





int get_shortest_path(int maze[N][N],Point source,Point destination){


if(!is_cell_safe(source.x,source.y) || !is_cell_safe(destination.x,destination.y)){
    return INT_MAX;
}

bool visited[N][N];
memset(visited,false,sizeof(visited[0][0]*N*N));

queue<Node>q;
Node q1={source,0};
q.push(q1);
while(!q.empty()){

Node n=q.front();
Point p=n.x;
if(p.x==destination.x && p.y==destination.y){
    return n.dist;
}
q.pop();
for(int i=0;i<4;i++){

    int rowN=p.x+rows[i];
    int colN=p.y+cols[i];
    if(is_cell_safe(rowN,colN) && !visited[rowN][colN] && maze[rowN][colN]){
        visited[rowN][colN]=true;
        Node adj={{rowN,colN},n.dist+1};
        q.push(adj);
        


    }


}




}
return INT_MAX;

}












int main(){

int maze[10][10]={ 
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 }, 
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 }, 
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 }, 
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 }, 
        { 1, 1, 1, 0, 1, 1, 1, 0, 1, 0 }, 
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 }, 
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, 
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 }, 
        { 1, 1, 0, 0, 0, 0, 1, 0, 0, 1 } 
    }; 


Point source={0,0};
Point dest={3,4};


cout<<get_shortest_path(maze,source,dest);


return 1;








}