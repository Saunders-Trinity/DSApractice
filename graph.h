//making a graph using an adjacency map
using namespace std;
class graph{
  map<int,vector<int>> adjList;
//adding an adge to a graph connects two nodes
void addEdge(int u,int v,bool isDirected = false){
    adjList[u].push_back(v);
    if(!isDirected){
        adjList[v].push_back(u);
    }
}
//way to print the contents of the graph
void printGraph() {
        for (auto const& [node, neighbors] : adjList) {
            std::cout << "Node " << node << ": ";
            for (int neighbor : neighbors) {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
}
//if i wanted to add things to the graph. make an instansiation then add
graph testGraph;//instantance of class
testGraph(1,2);//adds an edge
testGraph.printGraph();//prints all values
