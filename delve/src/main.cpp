// Delve: a terminal roguelike you build one stage at a time.
//
// The tester runs your program as:   delve <command> [arguments...]
// Each stage adds a command. Add an `if (command == "...")` branch per command.
// (argc/argv, the "command line arguments", are explained properly in LearnCPP
// 20.4; until then, treat this dispatch as given.)
#include <iostream>
#include <string_view>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cerr << "usage: delve <command> [arguments...]\n";
        return 1;
    }

    const std::string_view command{ argv[1] };

    // Stage d01: handle `command == "greet"` here.

    std::cerr << "Unknown command: " << command << '\n';
    return 1;
}
