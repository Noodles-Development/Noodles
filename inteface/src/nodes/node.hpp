#pragma once

#include <string>

class node {
    public:
        node() = default;
        explicit node(const std::string& name);

        std::string get_name() const;
        void set_name(const std::string& name);

    private:
        std::string name_;
};
