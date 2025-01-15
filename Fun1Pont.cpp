#include <iostream>
using namespace std;

void oiMundo() {
    cout << "Hello world\n";
}

int main() {
    void (*funcPtr)() = oiMundo;

    funcPtr();
    funcPtr();

    return 0;
}

