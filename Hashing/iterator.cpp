#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> ourmap;
    ourmap["abc"] = 1;
    ourmap["abc1"] = 2;
    ourmap["abc2"] = 3;
    ourmap["abc3"] = 4;
    ourmap["abc4"] = 5;
    ourmap["abc5"] = 6;

   unordered_map<string,int>::iterator it = ourmap.begin();
   while(it != ourmap.end())
   {
       cout << "key : " << it -> first << "value : " << it -> second;
       it++;
   }



    

}