#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    char q = 34;
    string l[] = {
    "    ",
    "#include <iostream>",
    "#include <string>",
    "using namespace std;",
    "",
    "int main(int argc, char* argv[])",
    "{",
    "    char q = 34;",
    "    string l[] = {",
    "    };",
    "    for(int i = 1; i <= 8; i++)",
    "        cout << l[i] << endl;",
    "    for(int i = 0; i <= 17; i++)",
    "        cout << l[0] + q + l[i] + q + ',' << endl;",
    "    for(int i = 9; i <= 17; i++)",
    "        cout << l[i] << endl;",
    "    return 0;",
    "}",
    };
    for(int i = 1; i <= 8; i++)
        cout << l[i] << endl;
    for(int i = 0; i <= 17; i++)
        cout << l[0] + q + l[i] + q + ',' << endl;
    for(int i = 9; i <= 17; i++)
        cout << l[i] << endl;
    return 0;
}
