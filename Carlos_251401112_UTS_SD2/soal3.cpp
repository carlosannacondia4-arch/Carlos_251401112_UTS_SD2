#include <iostream>
#include <string>

using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value) {
    if(top == MAX - 1){
        cout << "Stack Penuh !\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " ditambahkan dalam stack\n";
    }
}

char pop() {
    if(top == -1){
        cout << "Stack kosong !\n";
    } else {
        cout << stack[top];
        top--;
    }
}

int main() {

    string kata;

    cout << "Masukkan sebuah kata: ";
    getline(cin, kata);

    for (char c : kata) {
        push(c);
    }

    cout << "Hasil kebalikan: ";
    while (top != -1) {
        cout << pop();
    }
    
    cout << endl;

    return 0;
}