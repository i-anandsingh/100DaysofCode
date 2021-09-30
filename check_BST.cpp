class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not
    bool helper(Node* root, int min, int max){
        if(!root)
            return true;
        if(root->data >= max or root->data <= min)
            return false;
        return helper(root->left, min, root->data) and helper(root->right, root->data, max);
    }
    bool isBST(Node* root, int min = INT_MIN, int max = INT_MAX) 
    {
        // Your code here
        return helper(root, INT_MIN, INT_MAX);
    }
};