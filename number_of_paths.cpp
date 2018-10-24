// when you are allowed to move only down and right and if allowed to move disgonally down then add countways(m-1,n-1)

#include"essentials.cpp"


int countways(int m,int n)
{

if(m==0 || n==0){
    return 0;
}
if(m==1 || n==1){
    return 1;
}
return countways(m-1,n)+countways(m,n-1);



}


int count_ways_dp(int m,int n){

int maze[m][n];
for(int i=0;i<m;i++){
    maze[i][0]=1;
}

for(int i=0;i<n;i++){
    maze[0][i]=1;
}
for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        maze[i][j]=maze[i-1][j]+maze[i][j-1];
    }
}


return maze[m-1][n-1];




}




int main(){


cout<<countways(2,2)<<endl;
cout<<count_ways_dp(2,2)<<endl;



return 1;


}