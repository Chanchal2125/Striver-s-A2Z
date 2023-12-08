void nLetterTriangle(int n) {
    // Write your code here.
    for(int i = 1; i <= n; i++){
        char m = 'A';
        for(int j = 1; j <= i; j++){
            cout<<m<<" ";
            m = char(m+1);
        }
        cout<<endl;
    }
}


/*
A
AB
ABC  n = 3
*/
