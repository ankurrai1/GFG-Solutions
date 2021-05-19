// digonal is nodes with same digonal value;
// we start with 0 at root as a digonal value;
//
// left node digonal value = parent digonal value + 1;
// and right node digonal value = parent digonal value;


/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/
void sumUP(Node * root, int d, map<int , int> &sums){
    if(root == NULL) return;
    sums[d] += root->data;
    sumUP(root->left, d + 1, sums);
    sumUP(root->right, d, sums);
}

vector <int> diagonalSum(Node* root) {
    map<int, int> sums;
    vector<int> res;
    sumUP(root, 0 ,sums);
    for(auto ele : sums){
        res.push_back(ele.second);
    }
    return res;
}
