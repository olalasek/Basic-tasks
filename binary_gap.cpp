
int solution(int N) {
    vector <int> v;

    while(N>0) {
        v.push_back(N%2);
        N/=2;
    }
    //iteration 1: N=9, 9%2=1, N =4
        //iteration 2: N=4, 4%2=0, N=2
        //iteration 3: N=2, 2%2=0, N=1
        //iteration 4: N = 1, 1%2=1, N=0

    int b= 0, maxb=0;
    for(int i = v.size()-1; i>=0; i--){
        if(v[i]==0) b++;
        else if (v[i]==1) {maxb=max(maxb, b); b=0; }
    }
    return maxb;
}
