#include<bits/stdc++.h>
using namespace std;
int main() {

    int r,c;
    cout << "Enter number of rows and columns of the matrix: ";
    cin >> r >> c;
    vector<vector<int>> m(r,vector<int>(c));
    vector<vector<int>> ans(c,vector<int>(c));
    cout << "enter in matrix" <<endl;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> m[i][j];
            ans[j][i] = m[i][j];
        }
    }


    // printing the transposed matrix
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j ++) {
            cout << ans[i][j] << " ";
        }cout << endl;
    }

    return 0;
}


