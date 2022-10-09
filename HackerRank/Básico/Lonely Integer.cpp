int lonelyinteger(vector<int> a) {
    map<int,int> mymap;
    for(auto z : a){
        mymap[z]+=1;
    }
    int sol=0;
    for(auto z : mymap){
        if(z.second==1){
            sol = z.first;
        }
    }
    return sol;
}