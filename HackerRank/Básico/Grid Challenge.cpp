string gridChallenge(vector<string> grid) {
    for(auto&z :grid){
        sort(z.begin(),z.end());
    }
    for(int i=0;i<grid.size();i++){ //renglones
        for(int j=0;j<grid.size()-1;j++){
            if(grid[j][i]<=grid[j+1][i]){
                continue;
            }else{
                return "NO";
            }
        }
    }
    return "YES";
}