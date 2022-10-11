string calcu(string n){
    if(n.size()==1){
        return n;
    }else{
        long long int suma=0;
        for(auto s:n){
            suma+=s-'0';
        }
        return calcu(to_string(suma));
    }
}


int superDigit(string n, int k){
    long long int suma=0;
    for(auto s:n){
        suma+=s-'0';
    }
    suma=suma*k;
    suma=stoi(calcu(to_string(suma)));
    return suma;
}