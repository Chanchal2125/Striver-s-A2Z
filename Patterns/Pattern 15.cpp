void nLetterTriangle(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        char z = 'A';
        for(int m = n-i; m >= 1; m--){
            cout<<z<<" ";
            z = char(z+1);
        }
        cout<<endl;
    }
}


/*
ABCD
ABC
AB
A  n = 4
*/
