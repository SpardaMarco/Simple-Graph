//
// Created by marco on 29-04-2023.
//

#include "edge.h"

Edge::Edge(int source, int dest, double weight) {
    source_ = source;
    dest_ = dest;
    weight_ = weight;
}

int Edge::getSource() const {
    return source_;
}

int Edge::getDest() const {
    return dest_;
}

double Edge::getWeight() const {
    return weight_;
}

bool Edge::isSelected() const {
    return selected_;
}

void Edge::setSelected(bool selected) {
    selected_ = selected;
}

void Edge::setWeight(double weight) {
    weight_ = weight;
}
