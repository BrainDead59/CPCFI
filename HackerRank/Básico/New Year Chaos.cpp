void minimumBribes(vector<int> q) {
    int suma=0;
    for(int i=0;i<q.size()-1;i++){
        int contador=0;
        for(int j=i+1;j<q.size();j++){
            if(q[i]>q[j]){
                contador++;
                suma++;
                if(contador>2){ 
                    cout<<"Too chaotic\n";
                    return; 
                }
            }
        }
    }
    cout << suma << "\n";
}