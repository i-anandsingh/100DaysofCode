class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> v;
        map<int, vector<int>> m;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            Node* t = q.front().first;
            int h = q.front().second;
            q.pop();
            m[h].push_back(t->data);
            if(t->left) q.push({t->left, h-1});
            if(t->right) q.push({t->right, h+1});
        }
        for(auto &i : m){
            for(auto &val : i.second){
                v.push_back(val);
            }
        }
        return v;
    }
};