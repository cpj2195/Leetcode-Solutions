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

void bellman_ford(int source);
void convert_adjlist_to_adjmatrix();

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



void Graph::convert_adjlist_to_adjmatrix(){

int rows=this->adj_list.size();
int matrix[rows][rows];

for(int i=0;i<rows;i++){
    for(int j=0;j<rows;j++){
        if(i==j){
            matrix[i][j]=0;
        }
        else{
            matrix[i][j]=99;
        }
        
    }
}




for(int i=0;i<this->adj_list.size();i++){
    for(auto j:adj_list[i]){
        matrix[i][j.first]=j.second;
    }

}

int floyd_matrix[rows][rows];




for(int i=0;i<rows;i++){
    for(int j=0;j<rows;j++){
        floyd_matrix[i][j]=matrix[i][j];
    }
}


for(int i=0;i<rows;i++){

    for(int j=0;j<rows;j++){

        for(int k=0;j<rows;j++){

                if(floyd_matrix[j][i]+floyd_matrix[i][k]<floyd_matrix[j][k]){
                    floyd_matrix[j][k]=floyd_matrix[j][i]+floyd_matrix[i][k];
                }


        }

    }



}



for (int i = 0; i < rows; i++) 
    { 
        for (int j = 0; j < rows; j++) 
        { 
                if(floyd_matrix[i][j]>90){
                    cout<<"INF"<<" ";
                }
                else{
                cout<<(floyd_matrix[i][j])<<" "; 
                }
        } 

        printf("\n"); 
    } 

// return matrix;


}

















int main(){



vector< vector< pair<int, int> > > v1(10);
// std::vector< std::list<std::pair< int, int> > > graph;
// cout<<"ftgf4frf"<<endl;


// vector <pair<int, int> > adj[];
// vector< vector< pair<int,int> > > v1;
// v1[0].push_back(make_pair(1,2));
// v1[0].push_back(make_pair(2,12));
// v1[0].push_back(make_pair(3,4));
// adjacencyList[v1].push_back(make_pair(v2, weight))

// for(auto it:v1){
//     for (auto i:it){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
// }

Graph g(5);
// g.addEdge(0, 1, 4); 
// g.addEdge(0, 7, 8); 
// g.addEdge(1, 2, 8); 
// g.addEdge(1, 7, 11); 
// g.addEdge(2, 3, 7); 
// g.addEdge(2, 8, 2); 
// g.addEdge(2, 5, 4); 
// g.addEdge(3, 4, 9); 
// g.addEdge(3, 5, 14); 
// g.addEdge(4, 5, 10); 
// g.addEdge(5, 6, 2); 
// g.addEdge(6, 7, 1); 
// g.addEdge(6, 8, 6); 
// g.addEdge(7, 8, 7); 



g.addEdge(0, 1, -1); 
g.addEdge(0, 2, 4); 
g.addEdge(1, 2, 3); 
g.addEdge(1, 3, 2); 
g.addEdge(1, 4, 2); 
g.addEdge(3, 2, 5); 
g.addEdge(3, 1, 1); 
g.addEdge(4, 3, -3); 


g.convert_adjlist_to_adjmatrix();

// g.djikstras(0);
// g.bellman_ford(0);



return 1;


}