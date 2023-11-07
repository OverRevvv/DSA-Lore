#include<stdio.h>
#include<stdlib.h>

typedef struct ArrayADT   //This is ADT which is getting used to allocate memory for structure
{
    int total_size;        
    int used_size;
    int *ptr;

}adt;

void createArray(adt *a, int tsize, int usize){
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr= (int *) malloc(tsize*sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr= (int *) malloc(tsize*sizeof(int));
}

void show(adt *a ){
  for (int i = 0; i < a->used_size; i++)
  {
    printf("%d\n",(a->ptr)[i]);
  }
  
}

void setVal (adt *a ){
    int n;
  for (int i = 0; i < a->used_size; i++)
  {
    printf("Enter element %d",i);
    scanf("%d",&n);
    (a->ptr)[i]= n;
  }
  
}

int main ()
{
    adt marks;
    createArray(&marks, 10, 2);
    printf("We are running SetVal now \n");
    setVal(&marks);
    printf("We are running Show now \n");
    show(&marks);
return 0;
}