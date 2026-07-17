class Solution {
public:
    void dfs(int room, vector<vector<int>>& rooms, vector<bool>& visited){
        if(visited[room]) return;
        visited[room] = true;
        for(int key : rooms[room]){
            dfs(key, rooms, visited);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        dfs(0, rooms, visited);
        
        for(int i = 0; i < visited.size(); i++){
            if(visited[i] == false){
                return false;
            }
        }
        return true;
    }
};