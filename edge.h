#ifndef SG_EDGE_H
#define SG_EDGE_H

class Edge {
public:
    Edge(int source, int dest, double weight);

    int getSource() const;
    int getDest() const;
    double getWeight() const;
    bool isSelected() const;

    void setSelected(bool selected);
    void setWeight(double weight);
protected:
    int source_;
    int dest_;
    double weight_;

    bool selected_ = false;
};

#endif
