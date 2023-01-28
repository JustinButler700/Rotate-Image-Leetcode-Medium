class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = 0;
        int r = matrix.size()-1;
        while(l < r){
            int i = 0;
            //i is our offset, as once we're done with one rotation, we move to the next.
            while(i < r - l){
                int top = l;
                int bottom = r;
                //Store our top left as a temp var, while we adjust the array clockwise
                int topLeft = matrix[top][l+i];
                //Next, we rotate the array.
                //Move bottom left, into top left.,
                matrix[top][l + i] = matrix[bottom - i][l];
                //move bottom right into bottom left
                matrix[bottom - i ][l] = matrix[bottom][r -i ];
                // move top right into bottom right
                matrix[bottom][r - i] = matrix[top + i][r];
                // move top left into top right.
                matrix[top + i][r] = topLeft;
                i++;
            }
            l++;
            r--;
        }
        
    }
};
