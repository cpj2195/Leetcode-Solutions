#include "essentials.cpp"

class Graph{


int vertices;
vector<list<int>>adjacency_list;


public:
Graph(int vertices);

void add_edge_undirected(int v, int w);
void add_edge_directed(int source, int dest);
void print_graph();
void get_listsize();
void topological_sort(int vertex,bool visited[],stack<int>&s);
void top_sort();

};



Graph::Graph(int number){

this->vertices=number;
this->adjacency_list.resize(number);


}




void Graph::add_edge_undirected(int v, int w){


adjacency_list[v].push_back(w);
adjacency_list[w].push_back(v);

}


void Graph::add_edge_directed(int source, int dest){


adjacency_list[source].push_back(dest);

}


void Graph::print_graph(){



        for(int i=0;i<this->adjacency_list.size();i++){

        cout<<"vertices connected to node "<<i <<" are ";
        //cout<<*i;
        for(auto it:adjacency_list[i]){
            cout<<it<<" ";
        }
        cout<<endl;
        
    }


}





void Graph::get_listsize(){
    cout<<"Number of vertices are "<<this->vertices<<endl;
    cout<<this->adjacency_list.size()<<endl;
}






void Graph::top_sort(){

bool *visited=new bool[this->vertices];
stack<int>s;
for(int i=0;i<vertices;i++){
    if(!visited[i]){
        topological_sort(i,visited,s);
    }
}

while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}



}


void Graph::topological_sort(int vertex,bool visited[],stack<int>&s){


visited[vertex]=true;


for(list<int>:: iterator i=adjacency_list[vertex].begin();i!=adjacency_list[vertex].end();++i){

if(!visited[*i]){
    topological_sort(*i,visited,s);
    
}
}


s.push(vertex);






}




int main(){



Graph g(5);

g.get_listsize();

g.add_edge_directed(0,2);
g.add_edge_directed(0,3);
g.add_edge_directed(1,0);

g.add_edge_directed(2,1);
g.add_edge_directed(3,4);
g.add_edge_directed(4,0);





g.top_sort();

return 1;



}