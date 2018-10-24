// #include "essentials.cpp"

// class Graph{


// int vertices;
// // vector<list<int>>adjacency_list;
// list<int>*array;

// public:
// Graph(int vertices);

// void add_edge_undirected(int v, int w);
// void add_edge_directed(int source, int dest);
// void print_graph();
// void get_listsize();

// };



// Graph::Graph(int number){

// this->vertices=number;
// list<int>*array[number];
// // this->adjacency_list.resize(number);
// // cout<<vertices<<endl;
// // cout<<adjacency_list.size()<<endl;


// }




// void Graph::add_edge_undirected(int v, int w){


// adjacency_list[v].push_back(w);
// adjacency_list[w].push_back(v);

// }


// void Graph::add_edge_directed(int source, int dest){


// adjacency_list[source].push_back(dest);

// }


// void Graph::print_graph(){

// std::vector<std::list<int> >::iterator i;
//      int c=0;
//     for (std::vector<std::list<int> >::iterator i=this->adjacency_list.begin(); i !=adjacency_list.end(); ++i){


//         cout<<"vertices connected to node "<<c <<" are ";
//         //cout<<*i;

//         std::list<int> li = *i;
//         for(std::list<int>::iterator iter = li.begin(); iter!= li.end(); ++iter){

//             cout<<*iter<<" ";
//         }
//         cout<<endl;
//         c++;
//     }


// }





// void Graph::get_listsize(){
//     cout<<"Number of vertices are "<<this->vertices<<endl;
//     cout<<this->adjacency_list.size()<<endl;
// }





// int main(){



// Graph g(5);
// // cout<<g.<<endl;
// cout<<"hi"<<endl;
// // cout<<g.adjacency_list.size()<<endl;

// // vector<list<int>>hi(10);
// // cout<<hi.size()<<endl;

// g.get_listsize();

// g.add_edge_undirected(0,1);
// g.add_edge_undirected(0,4);
// g.add_edge_undirected(1,2);
// g.add_edge_undirected(1,3);
// g.add_edge_undirected(1,4);
// g.add_edge_undirected(2,3);
// g.add_edge_undirected(3,4);


// g.print_graph();
// // cout<<g.adjacency_list.size()<<endl;

// return 1;



// }


#include "essentials.cpp"



int main(){


bool* visited=new bool[10];
visited={0};
for(int i=0;i<10;i++){
    cout<<visited[i]<<" ";

}
return 1;


}