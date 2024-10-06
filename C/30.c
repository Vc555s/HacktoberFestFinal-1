// Check If It Is a Straight Line

// You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 

 

// Example 1:



// Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
// Output: true
// Example 2:



// Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
// Output: false
 

// Constraints:

// 2 <= coordinates.length <= 1000
// coordinates[i].length == 2
// -10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
// coordinates contains no duplicate point.


#include <stdio.h>
#include <stdbool.h>

bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
    int x0 = coordinates[0][0], y0 = coordinates[0][1];
    int x1 = coordinates[1][0], y1 = coordinates[1][1];
    int dx = x1 - x0;
    int dy = y1 - y0;

    for (int i = 2; i < coordinatesSize; i++) {
        int x = coordinates[i][0], y = coordinates[i][1];
        if (dy * (x - x0) != dx * (y - y0)) {
            return false; 
        }
    }
    return true;  
}

int main() {
   
    int coordinates1[][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};
    int coordinates2[][2] = {{1, 1}, {2, 2}, {3, 4}, {4, 5}, {5, 6}, {7, 7}};
    
    int* arr1[6]; for (int i = 0; i < 6; i++) arr1[i] = coordinates1[i];
    int* arr2[6]; for (int i = 0; i < 6; i++) arr2[i] = coordinates2[i];

 
    printf("%s\n", checkStraightLine(arr1, 6, NULL) ? "true" : "false");  
    printf("%s\n", checkStraightLine(arr2, 6, NULL) ? "true" : "false");  

    return 0;
}