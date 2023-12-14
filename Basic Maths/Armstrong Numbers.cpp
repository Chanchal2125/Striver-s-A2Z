bool checkArmstrong(int n){
	//Write your code here
	int t = n;
	int a = n;
	long long int sum = 0;
	int c = 0;

	while(a > 0){
		a = a / 10;
		c += 1;
	}

	while(n != 0){
		int rem = n % 10;
		sum += pow(rem,c);
		n = n / 10;
	}

	if(sum == t) return true;
	return false;
}
