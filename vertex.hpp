#ifndef SG_VERTEX_H
#define SG_VERTEX_H

#include <vector>
#include <algorithm>

class Edge;

class Vertex {
public:
    explicit Vertex(int id);
    int getId() const;
    bool isVisited() const;
    bool isProcessing() const;
    double getDist() const;
    int getPath() const;

    void setId(int id);
    void setVisited(bool visited);
    void setProcesssing(bool processing);
    void setDist(double dist);
    void setPath(int path);
protected:
    int id_;

    // Helpful fields
    bool visited_ = false;
    bool processing_ = false;
    double dist_ = 0;
    int path_ = -1;
};

#endif
