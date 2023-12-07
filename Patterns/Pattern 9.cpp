void nStarDiamond(int n) {
    // Write your code here.
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = n-1-i; j >= 1; j--)
            cout<<" ";
        for(int b = 1; b <= k ; b++)
            cout<<"*";
        k+=2;
        cout<<endl;
    }

    int z = 0;
    int j = 2*n-1;
    for(int i = 0; i < n; i++){
        for(int a = 0; a < z; a++){
            cout<<" ";
        }
        z++;
        for(int m = 1; m <= j; m++){
            cout<<"*";
        }
        cout<<endl;
        j-=2;
    }
}


/*
  *
 ***
*****
*****    n=3
 ***
  *
*/
