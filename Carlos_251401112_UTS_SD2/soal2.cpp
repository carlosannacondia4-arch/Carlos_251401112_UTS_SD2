#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

// 1. Tambah di awal
void tambahDiAwal(int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = head;
    head = baru;
}

// 2. Tambah di akhir
void tambahDiAkhir(int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
        return;
    }
}