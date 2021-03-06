#include"essentials.cpp"





class Graph{

private:
vector< vector<pair<int,int> > > adj_list;
int vertices;


public:
Graph(int number);
void addEdge(int source,int destination, int weight);

void print_graph();


void djikstras(int source);



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



void Graph::djikstras(int source){


vector<int>dist(vertices,INT_MAX);
dist[source]=0;
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
pq.push(make_pair(0,source));



while(!pq.empty())
{
int vertex=pq.top().second;

pq.pop();

for(auto it:this->adj_list[vertex])
{

int v=it.first;
int w=it.second;
if(dist[v]>dist[vertex]+w){

dist[v]=dist[vertex]+w;
pq.push(make_pair(dist[v],v));


}



}










}

printf("Vertex   Distance from Source\n"); 
    for (int i = 0; i < this->vertices; ++i) 
        printf("%d \t\t %d\n", i, dist[i]); 



}




int main(){





Graph g(8);
g.addEdge(0, 1, 4); 
g.addEdge(0, 7, 8); 
g.addEdge(1, 2, 8); 
g.addEdge(1, 7, 11); 
g.addEdge(2, 3, 7); 
g.addEdge(2, 8, 2); 
g.addEdge(2, 5, 4); 
g.addEdge(3, 4, 9); 
g.addEdge(3, 5, 14); 
g.addEdge(4, 5, 10); 
g.addEdge(5, 6, 2); 
g.addEdge(6, 7, 1); 
g.addEdge(6, 8, 6); 
g.addEdge(7, 8, 7); 








g.djikstras(0);



return 1;


}