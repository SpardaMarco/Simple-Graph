#include "vertex.hpp"

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

void Vertex::setId(int id) {
    id_ = id;
}

void Vertex::setVisited(bool visited) {
    visited_ = visited;
}

void Vertex::setProcesssing(bool processing) {
    processing_ = processing;
}

void Vertex::setDist(double dist) {
    dist_ = dist;
}

void Vertex::setPath(int path) {
    path_ = path;
}
