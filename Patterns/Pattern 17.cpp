void alphaHill(int n) {
    // Write your code here.
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        for (char ch = 'A'; ch <= 'A' + i - 1; ++ch) {
            cout << ch<<" ";
        }

        for (char ch = 'A' + i - 2; ch >= 'A'; --ch) {
            cout << ch<<" ";
        }
        cout<<endl;
    }

}

/*
  A
 ABA
ABCBA    n = 3
*/
