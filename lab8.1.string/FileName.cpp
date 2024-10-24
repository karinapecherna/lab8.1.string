#include <iostream>
#include <string>
using namespace std;


int Count(const string& s)
{
    int k = 0;
    size_t pos = 0;
    while (pos < s.length()) {
       
        if (s.substr(pos, 3) == "OGO" || s.substr(pos, 3) == "AGA") {
            k++;
            pos += 3; 
        }
        else {
            pos++;
        }
    }
    return k;
}


string Change(string& s)
{
    size_t pos = 0;
    while (pos < s.length()) {
       
        if (s.substr(pos, 3) == "OGO" || s.substr(pos, 3) == "AGA") {
            s.replace(pos, 3, "**"); 
            pos += 2;
        }
        else {
            pos++; 
        }
    }
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of 'OGO or AGA'" << endl;

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
