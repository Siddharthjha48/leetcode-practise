class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected,
             vector<bool>& visited, int n) {

        visited[node] = true;

        for (int i = 0; i < n; i++) {
            if (isConnected[node][i] && !visited[i]) {
                dfs(i, isConnected, visited, n);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);

        int provinces = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, isConnected, visited, n);
                provinces++;
            }
        }

        return provinces;
    }
};