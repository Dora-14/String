#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "bARAck";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    int pos = 'A' - 'a';
    for(int i=0; i < str.size(); i++){
        str[i] += pos;
    }
    cout << str << endl;

    return 0;
}
