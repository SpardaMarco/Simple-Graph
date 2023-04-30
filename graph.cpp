#include "graph.h"
#include <climits>

Graph::Graph(bool directed) {
    directed_ = directed;
}

Vertex& Graph::findVertex(const int &id) {
    if(id < 0 || id >= (int) vertexVector_.size()) throw ("During findVertex: Vertex doesn't exist!");
    return vertexVector_[id];
}


bool Graph::addVertex() {
    if((int) vertexVector_.size() == INT_MAX) return false;
    vertexVector_.push_back(Vertex( (int) vertexVector_.size()));
    return true;
}

bool Graph::addEdge(const int source, const int dest, double weight) {
    if(source < 0 || dest < 0 || source >= (int) vertexVector_.size() || dest >= (int) vertexVector_.size() || source == dest) return false;
    Vertex sourceVertex = vertexVector_[source];
    sourceVertex.addEdge(dest, weight);
    if(!directed_){
        Vertex destVertex = vertexVector_[dest];
        destVertex.addEdge(source, weight);
    }
    return true;
}

int Graph::getNumVertex() const {
    return (int) vertexVector_.size();
}
