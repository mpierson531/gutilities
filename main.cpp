#include "gutilities/gutils/Array.hpp"
#include "gutilities/gio/Console.hpp"
#include "gutilities/gutils/Result.hpp"

#include <string>
using std::string;

void arrayIteration() {
    gio::Console console;

    gutils::Array<string> gutilArray { "Hello", " ", "World", "!" };

    console.println("Iterating gutils::Array!");

    for (const string& s : gutilArray) {
        console.print(s);
    }

    console.println();
}

gutils::Result<string, string> constructResultTest() {
    if (!false) {
        return gutils::Result<string, string>::errOf("nullptr is false!");
    }

    return gutils::Result<string, string>::okOf("nullptr is true!");
}

void resultTest() {
    gio::Console console;

    auto result = constructResultTest();

    console.println("Testing a result!");

    if (!result) {
        console.println("result was an error!");
    }
}

int main() {
    gio::Console console;

    arrayIteration();

    console.println();

    resultTest();
}