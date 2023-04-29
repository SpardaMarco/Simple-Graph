#include "vertex.h"

Vertex::Vertex() {
    id_ = -1;
}

Vertex::Vertex(int id){
    id_ = id;
}

int Vertex::getId() const {
    return id_;
}

bool Vertex::isVisited() const {
    return visited_;
}

bool Vertex::isProcessing() const {
    return processing_;
}

double Vertex::getDist() const {
    return dist_;
}

int Vertex::getPath() const {
    return path_;
}

std::vector<Edge> Vertex::getAdj() const {
    return adj_;
}

std::vector<Edge> &Vertex::getAdj() {
    return adj_;
}

void Vertex::setId(int id) {
    id_ = id;
}

void Vertex::setVisited(bool visited) {
    visited_ = visited;
}

void Vertex::setProcessing(bool processing) {
    processing_ = processing;
}

void Vertex::setDist(double dist) {
    dist_ = dist;
}

void Vertex::setPath(int path) {
    path_ = path;
}

void Vertex::addEdge(int dest, double weight) {
    adj_.push_back(Edge(id_, dest, weight));
}
