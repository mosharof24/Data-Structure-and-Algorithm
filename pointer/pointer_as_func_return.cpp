#include<iostream>

using namespace std;

int* ADD(int *a, int *b){
	int *c = (int*) malloc(sizeof(int));   //memory allocated in heap section which will not deallocted as the function execution is finished or when another function is called which takes place in stack frame.
	*c = (*a)+(*b);
	return c;
}

void print(){
	printf("Hello world\n");
}
int main(){
	int a=4, b=2;
	int *sum = ADD(&a, &b);
	print();
	printf ("%d\n",*sum);// now *sum will give us the value 6. Though stackframe of ADD is overwritten by print function and pointer variable c is vanished.
    //printf("%d\n",c);  // this will give error because c is vanished with ADD function                  
}