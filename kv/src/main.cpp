// kv: your own mini standard library ("mstl") first, then a mini Redis built on it.
//
// The early kv stages are tested with unit tests against src/mstl/*.
// The server itself (this main) arrives in stage k09.
#include <iostream>

int main()
{
    std::cerr << "kv: the server is built in stage k09\n";
    return 1;
}
