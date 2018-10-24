#include"essentials.cpp"
#define R 3
#define C 3


int get_min(int x,int y,int z){

if(x<y){
    return (x<z)?x:z;
}
else{
    return y<z?y:z;
}

}


int get_min_dist(int cost[R][C]){


int dist[R][C];
dist[0][0]=cost[0][0];

for(int i=1;i<C;i++){
    dist[0][i]=cost[0][i]+dist[0][i-1];
}

for(int i=0;i<R;i++){
    dist[i][0]=cost[i][0]+dist[i-1][0];
}

for(int i=1;i<R;i++){
    for(int j=1;j<C;j++){
        dist[i][j]=get_min(dist[i-1][j],dist[i-1][j-1],dist[i][j-1])+cost[i][j];
    }
}



for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
}




return dist[R-1][C-1];


}








int main(){

int cost[R][C] = { {1, 2, 3}, 
                      {4, 8, 2}, 
                      {1, 5, 3} };

cout<<get_min_dist(cost);
return 1;






}