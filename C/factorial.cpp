void factorial(int n, double *fact){
	int count;
	for(count = n, *fact = 1; count > 0; count--)
		*fact *= double(count);
}
