void numberCrown(int n) {
    // Write your code here.
    int space = 2*(n-1);

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        for(int z = 1; z <= space; z++){
            cout<<" ";
        }
        for(int x = i; x >= 1; x--){
            cout<<x<<" ";
        }

        cout<<endl;
        space -= 2;
    }
}

/*

1    1
12  21
123321    n=3
*/
