#include <iostream>
#include <sstream>
#include <string>

struct Node {
    int data;
    Node *next;
};

std::string toString(Node *L) {
    std::ostringstream oss;
    oss << "[ ";
    while (L != nullptr) {
        oss << L->data << ' ';
        L = L->next;
    }
    oss << "]";
    return oss.str();
}

size_t length(Node *L) {
    size_t count {0};
    while (L != nullptr) {
        count++;
        L = L->next;
    }
    return count;
}

void pushFront(Node* &L, int value) {
    Node* nn = new Node;
    nn->data = value;
    nn->next = L;

    L = nn;
    return;
}

Node* getLast(Node* L) {
    Node* prev {nullptr};
    while (L != nullptr) {
        prev = L;
        L = L->next;
    }
    return prev;
}

void pushBack(Node* &L, int value) {
    Node* nn = new Node;
    nn->data = value;
    Node* last = getLast(L);

    if (last == nullptr) {
        L = nn;
    }
    else {
        last->next = nn;
    }
}

void reverse(Node *&L) {
    Node* current{L};
    Node* follow{current->next};
    Node* prev {nullptr};

    while (follow != nullptr) {
        current->next = prev;
        prev = current;
        current = follow;
        follow = follow->next;
    }   

    return;
}

int main() {
    Node *L{nullptr};
    pushFront(L, 3);
    pushFront(L, 2);
    pushFront(L, 1);
    pushFront(L, 0);
    pushBack(L, 5);
    reverse(L);
    std::cout << ">>> List: " << toString(L) << std::endl;
    std::cout << ">>> Comprimento da lista: " << length(L) << std::endl;
}