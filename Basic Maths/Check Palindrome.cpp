bool palindrome(int n)
{
    // Write your code here
    int temp = n;
    int rev = 0;

    while(n > 0){
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
    }

    if(rev == temp) return true;
    else return false;
}
