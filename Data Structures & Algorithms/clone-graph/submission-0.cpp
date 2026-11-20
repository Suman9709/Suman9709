/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    unordered_map<Node*, Node*>mpp;
private:
    Node* dfs(Node* node){
        // base case
        if(node == nullptr) return nullptr;
        // check deuplicate

        if(mpp.find(node) != mpp.end()) return mpp[node];

        //create a new node
        Node* clone = new Node(node->val);

        // store original --> cloned mapping
        mpp[node] = clone;
        //clone the graph
        for(Node* neighbor:node->neighbors){
            clone->neighbors.push_back(dfs(neighbor));
        }
        return clone;

    }
public:
    Node* cloneGraph(Node* node) {
        return dfs(node);
    }
};
