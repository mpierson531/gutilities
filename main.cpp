#include "gutilities/gutils/Array.hpp"
#include "gutilities/gio/Console.hpp"
using gutils::Array;
using gio::Console;

#include <string>
using std::string;

int main() {
    Console console;

    Array<string> gutilArray { "Hello", " ", "World", "!" };

    for (const string& s : gutilArray) {
        console.print(s);
    }

    console.println();
}