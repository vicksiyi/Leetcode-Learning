/**
 Given an image represented by an N x N matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

 

Example 1:

Given matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

Rotate the matrix in place. It becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
Example 2:

Given matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
], 

Rotate the matrix in place. It becomes:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]
 * **/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix.size(),vector<int>(0));
        for(int i=matrix.size()-1;i>-1;i--)
            for(int j=0;j<matrix.size();j++)
                res[j].push_back(matrix[i][j]);
        matrix=res;
    }
};