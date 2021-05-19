//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
//Function to count number of subtrees having sum equal to given sum.
int countTarget(Node* root,int x, int &count){
    if(root == NULL) return 0;
    int sum = root->data +
              countTarget(root->left, x, count) +
              countTarget(root->right, x, count);
    if(sum == x) count++;
    return sum;
}

int countSubtreesWithSumX(Node* root, int x)
{
	int count  = 0;
	countTarget(root, x, count);
	return count;
}
