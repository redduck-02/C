int check(unsigned int x){
	int count = 0, i;
	
	for(i=1; i<=x; i++){
		if(x%i==0){
			count++;
		}
	}
	if(count == 2){
		return 1;
	} else{
		return 0;
	}
}

int main(){

int n, a[100], i, count = 0;

printf("Enter the quantity for the array: ");
scanf("%d",&n);
	

for(i = 0; i < n; i++){
	printf("\nEnter the value for the array a[%d] ", i);
	scanf("%d", &a[i]);
	}
printf("\nThe prime number is\n");
for(i = 0; i < n; i++){
	if(check(a[i])==1){
		printf("%d\t", a[i]);
		count++;
	}
}
printf("\n\nThe number of primes in the array is %d", count);
	
return 0;	
	}

