void nStarTriangle(int n) {
    // Write your code here.
    int z = 1;
    for(int i = 0; i < n; i++){
        for(int j = n-1-i; j >= 1; j--)
            cout<<" ";
        for(int b = 1; b <= z ; b++)
            cout<<"*";
        z+=2;
        cout<<endl;
    }
}

/*
    *
   ***
  *****    n = 3
*/
