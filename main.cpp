#include <QApplication>
#include <QMessageBox>

#include "inteface/src/nodes/node.hpp"

int main(int argc, char** argv) {
    QApplication app {argc, argv};
    QMessageBox::about(nullptr, "Hello, World!", "Hello, World!");
    return app.exec();
}