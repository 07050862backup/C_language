/* �����m�� 
   Author�G���f��]07050862�^
   Purpose�G�O��ƦC�{�������m�ߡA��J�@��ƭȡA��X�ӦV�O��ƦC���ȡA�N�U�C�{���X���y�k�B�޿���~�����ץ����C
*/
# include <stdlib.h>
# include <stdio.h>
 
int main() {
    int n, i, n_2=0, n_1=1, fib;
    
    printf("The 0th number is 0, and the first number is 1\n");
    printf("ex : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...\n\n");
    printf("Please input an integer to show the last value of Fibonacci Sequence :");
    scanf("%d", &n);

    if (n == 0)
        fib = n_2;
     else if (n == 1)
        fib = n_1;
     else{
         for (i=1; i<=n-1; i++) {
            fib = n_2 + n_1;
            n_2 = n_1;
            n_1 = fib;
        }
    }
     printf("The %dth Fibonacci number is %d\n\n", n, fib);

    return 0;
}

