#include <iostream>
using namespace std; 

int[] mergeTwoArr(int a1[], int n1, int a2[], int n2, int a3[]) {
    int i = 0, j = 0, k = 0; // a1->i, a2->j, a3->k
    
    while((i < n1) && (j < n2)) {
        if(a1[i] <= a2[j]) {
            a3[k] = a1[i]; 
            i++; 
            k++; 
        } 
        else {
            a3[k] = a2[j]; 
            j++; 
            k++; 
        }
    }
    
    if(i < n1) {
        for(int a = i; a < n1; a++) {
            a3[k] = a1[a]; 
            k++; 
        }
    }
    
    if(j < n2) {
        for(int a = j; a < n2; a++) {
            a3[k] = a2[a]; 
            k++; 
        }
    }
    
    for(int i = 0; i < n1+n2; i++) {
        cout << a3[i] << ", "; 
    }
}

int main() {
    int a1[] = {10, 20, 30, 40, 50};
    int a2[] = {5, 15, 25};
    
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    
    int a3[n1+n2]; 
    
    mergeTwoArr(a1, n1, a2, n2, a3);
}



