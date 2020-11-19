// //To calculate the sum of 5 digit number
// #include <stdio.h>
// int main(){
// 	int number;
// 	int sum = 0;
// 	int a,b;

// 	printf("Enter a five digit number:\n");
// 	scanf("%d", &number);

// 	a = number%10;
// 	b = number/10;
// 	sum = sum + a;

// 	a = b%10;
// 	b = b/10;
// 	sum = sum + a;

// 	a = b%10;
// 	b = b/10;
// 	sum = sum + a;

// 	a = b%10;
// 	b = b/10;
// 	sum = sum + a;

// 	a = b%10;
// 	b = b/10;
// 	sum = sum + a;

// 	printf("The total sum of %d is %d\n", number, sum );
// }

//Reversing a five digit number
// #include <stdio.h>
// int main() {
//     int number, remainder;
//     int rev = 0;
//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     while (number != 0) {
//         remainder = number % 10;
//         rev = rev * 10 + remainder;
//         number /= 10;
//     }
//     printf("Reversed number = %d", rev);
//     return 0;
// }

