// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends



class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    // vector<int>v;
    // void solve(Node *root){
    //     if(!root)return;
    //     solve(root->left);
    //     v.push_back(root->data);
    // }
    // void solve1(Node *root){
    //     if(!root)return;
    //     v.push_back(root->data);
    //     solve1(root->right);
    // }
    // vector<int> topView(Node *root)
    // {
    //     //Your code here
    //     v.clear();
    //     solve(root->left);
    //     v.push_back(root->data);
    //     solve1(root->right);
    //     return v;
    // }
    map<int,vector<pair<int,int>>>m;
    void solve(Node* root,int l,int c){
        if(!root)return;
        m[c].push_back({l,root->data});
        solve(root->left,l+1,c-1);
        solve(root->right,l+1,c+1);
    }
    vector<int> topView(Node *root)
    {
        //Your code here
        if(!root)return {};
        solve(root,0,0);
        vector<int>v;
        for(auto &x:m){
            sort(x.second.begin(),x.second.end());
             v.push_back(x.second[0].second);
        }
        return v;
    }
};



// { Driver Code Starts.

int main() {
    int tc;
    cin>>tc;
    cin.ignore(256, '\n');
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for(int x : vec)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends