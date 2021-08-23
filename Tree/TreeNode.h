#include <vector> 
using namespace std;


template<typename T>


class TreeNode {

    public:

    T data;
    vector<TreeNode<T>*> children;

    // Making a constructor

    TreeNode(T data)
    {
        this -> data = data;
    }


};