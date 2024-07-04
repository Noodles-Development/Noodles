#include "node.hpp"

node::node(const std::string &name) : name_{name} {}

void node::set_name(const std::string &name) {
    name_ = name;
}

std::string node::get_name() const {
    return name_;
}