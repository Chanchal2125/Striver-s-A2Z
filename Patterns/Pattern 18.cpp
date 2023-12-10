void alphaTriangle(int n) {
    // Write your code here.
    char m = 'A';
    for(int i = 1; i <= n; i++){
        char a = char(m+n-1);
        for(int z = i; z >= 1; z--){
            cout<<a<<" ";
            a = char(a-1);
        }
        cout<<endl;
    }
}

/*
C
CB
CBA  n = 3
*/
