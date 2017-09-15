#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
typedef struct point Point;
struct point {
    int x;
    int y;
    double dist;
};
*/

/* anonymous struct, same as above */
typedef struct {
    int x;
    int y;
    double dist;
} Point;

Point *make_point(void);

int main(void) {

    /*
     * gcc structs.c -o structs -lm
     *
     * structs can include other structs...
     * usually pointer rather than plain struct
     *
     * however, cannot include struct of itself...
     * but can include a pointer to struct of itself
     *
     */

    /*
    struct point p;
    p.x = 9;
    p.y = -5;
    p.dist = sqrt(p.x*p.x + p.y*p.y);
    printf("x=%d y=%d dist=%f\n", p.x, p.y, p.dist);
    */

    Point *p;
    p = make_point();
    p->x = 9; /* p->x  same as   (*p).x   pointer-to-member operator, syntactic sugar */
    p->y = -5;
    p->dist = sqrt(p->x*p->x + p->y*p->y);
    printf("x=%d y=%d dist=%f\n", p->x, p->y, p->dist);
    free(p);

}

Point *make_point(void) {
    Point *p;
    p = (Point *) malloc(sizeof(Point));
    return p;
}
