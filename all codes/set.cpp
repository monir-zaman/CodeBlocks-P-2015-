#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string line;
    vector< int > v;
    vector< int > :: iterator i;
    while( getline(cin,  line ) )
    {
        if(line == "a") break;
        stringstream ss( line ); // initialize kortesi
        int num;
        while( ss >> num ) v.push_back( num ); // :P
        sort( v.begin(), v.end() );

// print routine
    }
    for( i = v.begin(); i !=  v.end(); i++) cout<<*i<<endl;



    // return 0;
}
