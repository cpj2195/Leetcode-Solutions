#include"essentials.cpp"





class Graph{

private:
vector< vector<pair<int,int> > > adj_list;
int vertices;


public:
Graph(int number);
void addEdge(int source,int destination, int weight);

void print_graph();



void floyd_warshall();

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






void Graph::floyd_warshall(){

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


g.floyd_warshall();




return 1;


}