vector<int> countingSort(vector<int> arr) {
    map<int, int> mymap;
    for(auto z:arr){
        mymap[z]+=1;
    }
    vector<int> vec(100,0);
    for(auto z: mymap){
        vec[z.first]+=z.second;
    }
    return vec;
}
