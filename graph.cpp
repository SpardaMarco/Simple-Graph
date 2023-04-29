#include "graph.h"
#include <climits>

Graph::Graph(bool directed) {
    directed_ = directed;
}

bool Graph::findVertex(const int &id, Vertex& vertex) {
    if(id < 0 || id >= vertexVector_.size()) return false;
    vertex = vertexVector_[id];
    return true;
}

bool Graph::addVertex() {
    if(vertexVector_.size() == INT_MAX) return false;
    vertexVector_.push_back(Vertex( (int) vertexVector_.size()));
    return true;
}

bool Graph::addEdge(const int source, const int dest, double weight) {
    if(source < 0 || dest < 0 || source >= vertexVector_.size() || dest >= vertexVector_.size()) return false;
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
