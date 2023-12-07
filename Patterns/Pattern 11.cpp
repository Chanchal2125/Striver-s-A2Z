void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i = 1; i <= n; i++){

        if(i%2 == 1){
            int m = 1;
            for(int a = 1; a <= i; a++){
                cout<<m<<" ";
                m = abs(m-1);
            }
        }
        else{
            int x = 0;
            for(int b = 1; b <= i; b++){
                cout<<x<<" ";
                x = abs(x-1);
            }
        }
        cout<<endl;
    }
}


/*
1
01
101  n=3
*/
