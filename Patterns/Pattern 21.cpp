void getStarPattern(int n) {
    // Write your code here.

    if(n == 1) cout<<"*";

    else{
        for(int i = 1; i <= n; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int m = 1; m <= n-2; m++){
        cout<<"*";
        for(int x = 1; x <= n-2; x++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i = 1; i <= n; i++){
        cout<<"*";
    }
    }
}

/*
****
*  *
*  *
****  n = 4
*/
