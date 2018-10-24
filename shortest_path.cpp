#include"essentials.cpp"


bool is_safe(int i,int j){

return(i>=0 &&  i<4 && j>=0 && j<4);

}

struct Point{
    int x;
    int y;
};

struct Node
{

Point p;
int dist;

};

int rows[]={-1,0,1,0};
int cols[]={0,1,0,-1};







int get_shortest_dist(char maze[4][4]){

bool visited[4][4];
memset(visited,false,16);

Point src={0,0};
Point dest={0,0};

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(maze[i][j]=='s'){
            src.x=i;
            src.y=j;
        }
        else if(maze[i][j]=='d'){
            dest.x=i;
            dest.y=j;
        }
    }
}

queue<Node>q;
Node n={src,0};
q.push(n);

while(!q.empty()){

Node n=q.front();

int xpt=n.p.x;
int ypt=n.p.y;
visited[xpt][ypt]=true;
q.pop();
if(xpt==dest.x && ypt==dest.y){
    return n.dist;
}


for(int k=0;k<4;k++){

    int new_xpt=xpt+rows[k];
    int new_ypt=ypt+cols[k];

    if(is_safe(new_xpt,new_ypt) && !visited[new_xpt][new_ypt] && maze[new_xpt][new_ypt]!='0'){

        visited[new_xpt][new_ypt]=true;
        Node adj={{new_xpt,new_ypt},n.dist+1};
        q.push(adj);

    }


}






}
return INT_MAX;




}




int main(){

char maze[4][4]={{'0', '*', '0', 's'},
                {'*', '0', '*', '*'},
                {'0', '*', '*', '*'},
                {'d', '0', '*', '*'}};


cout<<get_shortest_dist(maze)<<endl;
return 1;








}