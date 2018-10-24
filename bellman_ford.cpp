#include"essentials.cpp"





class Graph{

private:
vector< vector<pair<int,int> > > adj_list;
int vertices;


public:
Graph(int number);
void addEdge(int source,int destination, int weight);

void print_graph();




void bellman_ford(int source);


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




void Graph::bellman_ford(int source){

vector<int>dist(vertices,INT_MAX);
dist[source]=0;


for(int i=1;i<=this->adj_list.size()-1;i++){
    for(int j=0;j<this->adj_list.size();j++){
        for(auto x:this->adj_list[j]){
            int src=j;
            int dest=x.first;
            int w=x.second;
            if(dist[src]!=INT_MAX && dist[dest]>dist[src]+w)
            {
                dist[dest]=dist[src]+w;



            }

        }
    }




}


for(int j=0;j<this->adj_list.size();j++){
        for(auto x:this->adj_list[j]){
            int src=j;
            int dest=x.first;
            int w=x.second;
            if(dist[src]!=INT_MAX && dist[dest]>dist[src]+w)
            {
                cout<<"Negative Cycle Exists in the Graph"<<endl;



            }

        }


}

printf("Vertex   Distance from Source\n"); 
    for (int i = 0; i < this->vertices; ++i) 
        printf("%d \t\t %d\n", i, dist[i]); 




}


















int main(){





Graph g(5);



g.addEdge(0, 1, -1); 
g.addEdge(0, 2, 4); 
g.addEdge(1, 2, 3); 
g.addEdge(1, 3, 2); 
g.addEdge(1, 4, 2); 
g.addEdge(3, 2, 5); 
g.addEdge(3, 1, 1); 
g.addEdge(4, 3, -3); 


g.bellman_ford(0);




return 1;


}