#include<stdio.h>
// --> Book : Price, Author, Name.
// --> Phone: Price, Model, Color.

struct store{
    double price;
    char *author;
    char *name;
    char *color;
    char *model;
}o1;
struct store2{
    double price;
    union{
        struct{
            char *name;
            char *author;
        }book;
        struct{
            char *model;
            char *color;
        }phone;
    }product;
}o2;

int main()
{
    o2.product.book.name="Aadivasi";
    o2.product.book.author="Adakkivasi";
    o2.price=12330;
    o2.product.phone.model="Realme";
    o2.product.phone.color="SkyBlue";

    // Here Phone Data is get high byte compared between book data.so union datatype gets phone data //

    printf("\nBook Name  : %s",o2.product.book.name);
    printf("\nAuthor Name: %s",o2.product.book.author);
    printf("\nBook Price : %0.2lf",o2.price);
    printf("\nPhone Model: %s",o2.product.phone.model);
    printf("\nPhone Color: %s",o2.product.phone.color);
    printf("\nPhone Price: %0.2lf",o2.price);
    return 0;
}