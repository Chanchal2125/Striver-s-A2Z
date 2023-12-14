int sumOfAllDivisors(int n){
	// Write your code here.	
	long long int sum = 0;
	long long int z;

	for(int i = 1; i <= n; i++){
		z = 0;
		for(int j = 1; j <= sqrt(i); j++){
			if(i%j == 0){
				z += j;
				if(j != n/j) z += (n/j);
			}
		}
		sum += z;
	}

	return sum;
}
