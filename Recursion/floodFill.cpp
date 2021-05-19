class Solution {
public:

    void fillColor(vector<vector<int>> &image, int sr, int sc, int color, int oldColor){
        int row = image.size();
        int col = image[0].size();

        if(sr < 0 || sc < 0 || sr >= row || sc >= col || image[sr][sc] != oldColor) return;
        if(image[sr][sc] == color) return; // this check is use less until same color is replaced same color;
        // this will prevent it going into infinite loop

        image[sr][sc] = color;

        fillColor(image, sr + 1, sc, color, oldColor); // bottom
        fillColor(image, sr - 1, sc, color, oldColor); // top
        fillColor(image, sr, sc + 1, color, oldColor); // right
        fillColor(image, sr, sc - 1, color, oldColor); // left

    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {

        int oldColor = image[sr][sc];
        fillColor(image, sr, sc, newColor, oldColor);

        return image;
    }
}
