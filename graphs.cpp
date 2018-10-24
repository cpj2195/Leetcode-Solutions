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
void bfs(int vertex);
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


void Graph::bfs(int vertex)
{
queue<int>q;
q.push(vertex);
bool*visited =new bool[vertices];
visited[vertex]=true;


while(!q.empty()){

int top=q.front();
q.pop();

cout<<top<<" ";
for(list<int>:: iterator i=adjacency_list[top].begin();i!=adjacency_list[top].end();++i){

if(!visited[*i]){
    q.push(*i);
    visited[*i]=true;
}
}

}

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

// stack<int>s;
// s.push(vertex);
visited[vertex]=true;

// list<int>li=this->adjacency_list[vertex];

for(list<int>:: iterator i=adjacency_list[vertex].begin();i!=adjacency_list[vertex].end();++i){

if(!visited[*i]){
    topological_sort(*i,visited,s);
    // s.push(*i);
    // visited[*i]=true;
    // topological_sort(*i,visited,s);
}
}


s.push(vertex);






}




















int main(){



Graph g(5);
// cout<<g.<<endl;
// cout<<"hi"<<endl;
// cout<<g.adjacency_list.size()<<endl;

// vector<list<int>>hi(10);
// cout<<hi.size()<<endl;

g.get_listsize();

g.add_edge_directed(0,2);
g.add_edge_directed(0,3);
g.add_edge_directed(1,0);

g.add_edge_directed(2,1);
g.add_edge_directed(3,4);
g.add_edge_directed(4,0);





// g.add_edge_undirected(0,1);
// g.add_edge_undirected(0,2);
// g.add_edge_undirected(0,3);
// g.add_edge_undirected(1,2);

// g.add_edge_undirected(2,4);

// g.add_edge_undirected(3,4);


g.print_graph();

g.dfs(0);

// cout<<endl;
// g.top_sort();
// g.bfs(2);
// cout<<g.adjacency_list.size()<<endl;

return 1;



}