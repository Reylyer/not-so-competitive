#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
float heron(int a, int b, int c){
    float p = (a + b + c)/2.;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

void swap(float* a, float* b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
void tswap(triangle* a, triangle* b){
    triangle temp = *a;
    *a = *b;
    *b = temp;
}

void sort_by_area(triangle* tr, int n) {
	float area[100];
    for(int i = 0; i < n; i++){
        area[i] = heron(tr[i].a, tr[i].b, tr[i].c);
    }
    
    for(int i = 0; i < n; i++){
        int min_id = i;
        for(int j = i + 1; j < n; j++){
            if(area[min_id] > area[j]){
                min_id  = j;        
            }
        }
        swap(area + i, area + min_id);
        tswap(tr + i, tr + min_id);  
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}