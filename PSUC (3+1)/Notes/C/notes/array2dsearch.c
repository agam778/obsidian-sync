#include <stdio.h>

int main() {
    int key=12, c=0;
    int a[3][3] = {{10, 34, 534}, {12, 45, 46}, {43, 32, 32}};
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (key == a[i][j]) c++;
        }
    }

    if (c>0) printf("%d", c);
    else printf("Key not found");
}