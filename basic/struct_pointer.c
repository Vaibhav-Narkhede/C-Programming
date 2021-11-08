#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10,20};
    printf("%d %d\n",r.length, r.breadth);
    struct Rectangle *p = &r;
    printf("%p %p\n", p, &r);
    printf("------\n");
    
  //update length value
    p->length = 100;
    printf("%d %d\n", (*p).length, (*p).breadth);
    printf("%d %d\n", p->length, p->breadth);

    return 0;
}

