#include <iostream>
using namespace std;

int main()
{
    int r;
    int temp ;

if(temp == NULL)
{
    temp = new Node();
    temp->row = rowIndex;
    temp->col = colIndex;
    temp->value = nonZeroValue;
    temp->nextPointer = NULL;
    *p = temp;
}

else{
    while(temp->nextPointer != NULL)
    temp = temp->nextPointer;
    r = new Node();
    r->row = rowIndex;
    r->col = colIndex;
    r->value = nonZeroValue;
    r->nextPointer = NULL;
    temp->nextPointer = r;
}
}

