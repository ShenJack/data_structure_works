#include <stdio.h>
#include <stdlib.h>

int main() {
    struct book{
        char id[100];
        char name[100];
        float price;
    };
    int count = 0;
    struct book books[200];
    char id = '0';
    for(;;){
        struct book book1;
        scanf("%s",book1.id);
        scanf("%s",book1.name);
        scanf("%f",&book1.price);
        if(book1.id[0] == '0'){
            break;
        }

        books[count++] = book1;
    }

    printf("%d\n",count);
    for (int i = 0; i < count; ++i) {
        struct book book2 = books[i];
        printf("%s %s %.2f\n",book2.id,book2.name,book2.price);
    }
//    system("pause");
}