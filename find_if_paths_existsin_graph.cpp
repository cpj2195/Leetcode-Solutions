#include"essentials.cpp"




class Graph{

private:
vector< vector<pair<int,int> > > adj_list;
int vertices;


public:
Graph(int number);
void addEdge(int source,int destination, int weight);

void print_graph();


bool check_if_path_exists(int src,int dest);


};





Graph::Graph(int number){
this->vertices=number;
this->adj_list.resize(vertices);

}

void Graph::addEdge(int source,int destination,int weight){


this->adj_list[source].push_back(make_pair(destination,weight));
// this->adj_list[destination].push_back(make_pair(source,weight));





}



void Graph::print_graph(){
int j=0;
for(auto it:this->adj_list){
    cout<<"Nodes connected to "<<j<<endl;
    for(auto i:it){
        cout<<"Node: "<<i.first<<endl;
        cout<<"Weight: "<<i.second<<endl;


    }
    j++;



}
}



bool Graph::check_if_path_exists(int src,int dest){

cout<<vertices<<endl;

bool visited[vertices];
memset(visited,false,sizeof(this->adj_list));

queue<int>q;
q.push(src);

if(src<0 || src>vertices || dest<0 || dest>vertices){

cout<<"source and destination out of bounds"<<endl;
return false;

}

if(src==dest){
    return true;
}
visited[src]=true;

while(!q.empty()){

int node=q.front();

q.pop();
for(auto i:this->adj_list[node]){
    if(i.first==dest){
        return true;
    }
    if(!visited[i.first]){
        visited[i.first]=true;
        q.push(i.first);

    }
}




}
cout<<"No path exists"<<endl;
return false;











}









int main(){

Graph g(4); 
    g.addEdge(0, 1,1); 
    g.addEdge(0, 2,1); 
    g.addEdge(1, 2,1); 
    g.addEdge(2, 0,1); 
    g.addEdge(2, 3,1); 
    g.addEdge(3, 3,1); 


cout<<g.check_if_path_exists(1,3)<<endl;
cout<<g.check_if_path_exists(3,1)<<endl;



return 1;
}