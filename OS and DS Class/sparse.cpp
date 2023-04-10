#include<iostream>
using namespace std;
int main(){
    //sparse matrix of order 5x6 with 6 non - zero  values
    int sparseMatrix[5][6]=
    {{0,8,0,0,9,0},
    {0,0,0,3,0,0},
    {4,0,0,0,0,5},
    {0,6,9,2,0,0},
    {0,0,0,0,0,0}};
    
    
    //finding total non zero values in sparse matrix
    int nonZeroValues=0;
    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           if (sparseMatrix[i][j] !=0)
           {
            nonZeroValues++;
           }
           
        }
        
    }
    //defining triplet matrix 
    int tripletMatrix[3][nonZeroValues];
    //generating triplet  matirx
    int k=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           if (sparseMatrix[i][j]!=0)
           {
           tripletMatrix[0][k]=i;
            tripletMatrix[1][k]=j;
             tripletMatrix[2][k]=sparseMatrix[i][j];
             k++;
           }
           
        }
        
    }
    //displaying triplet kmatix
    cout<<" Triplet representation : "<<endl;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < nonZeroValues; j++)
       {
        cout<<tripletMatrix[i][j]<<" ";
       }
       cout<<endl;
       
    }
    
    return 0;
    
}