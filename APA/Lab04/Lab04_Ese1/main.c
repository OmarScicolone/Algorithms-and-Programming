#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);


int main()
{
    int a, b, c;
    printf("Inserire 2 interi di cui si vuole il M.C.D: ");
    scanf("%d %d", &a, &b);

    c = gcd(a, b);
    printf("%d", c);
    return 0;
}


int gcd(int a, int b){
    int tmp;

    if (a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    if (b == 0){
        return a;
    }

    if (a%2 == 0 && b%2 == 0){
        return 2*gcd(a/2, b/2);
    }
    else if (a%2 != 0 && b%2 == 0){
        return gcd(a, b/2);
    }
    else if (a%2 == 0 && b%2 != 0){
        return gcd(a/2, b);
    }
    else {
        return gcd((a-b)/2, b);
    }

}
