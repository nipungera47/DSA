#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    unordered_map<string,int> ourMap;
    //insert 
    pair<string,int> p("abc",1);
    ourMap.insert(p); // to insert element
    ourMap["def"] = 2;

    // find or access
    cout << ourMap["abc"] << endl;
    cout << ourMap.at("abc")<<endl;
    //cout << ourMap.at("ghi") << endl;
    cout << ourMap["ghi"] << endl; // if the key doent exist it will give 0 
    cout << ourMap.size () <<endl;
    // check presence
    if(ourMap.count("ghi") > 0)
    {
        cout << "Ghi is presesnt";
    }

    // erase an element
    ourMap.erase("ghi");
    cout << ourMap.size () <<endl;

     if(ourMap.count("ghi") > 0)
    {
        cout << "Ghi is presesnt";
    }



}