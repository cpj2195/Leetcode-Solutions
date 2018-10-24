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
void dfs(int vertex);

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



void Graph::dfs(int vertex){

bool* visited=new bool[vertices];
for(int i=0;i<vertices;i++){
    visited[i]=false;
}

stack<int>s;
s.push(vertex);
visited[vertex]=true;
while(!s.empty()){

int top=s.top();
s.pop();

cout<<top<<" ";

for(auto it:this->adjacency_list[top]){

if(!visited[it]){
    s.push(it);
    visited[it]=true;
}
}

}


}





int main(){



Graph g(5);


g.add_edge_directed(0,2);
g.add_edge_directed(0,3);
g.add_edge_directed(1,0);

g.add_edge_directed(2,1);
g.add_edge_directed(3,4);
g.add_edge_directed(4,0);








g.print_graph();

g.dfs(0);


return 1;



}