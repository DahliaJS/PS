//BOJ 

#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <tuple>

using namespace std;

int visited[101];
vector<int> graph[101];
bool pn[100];

class node {
public: int data;
        node* link;
        node() { data = 1; link = NULL; }
        node(int d, node* l) { data = d; link = l; }
};

void dfs(int n) {
    visited[n] = 1;
    for(auto next: graph[n])
        if(!visited[n]) dfs(next);
}

void list_head_insert(node*& head_ptr, const int& entry) {
    head_ptr = new node(entry, head_ptr);
}

void remove_head (node*& head_ptr) {
		node *remove_ptr;

		remove_ptr = head_ptr;
		head_ptr = head_ptr->link;    //now head_ptr points to the 2nd node
		
		delete remove_ptr;
}

void print(node* head_ptr) {
    node *cursor = head_ptr;
    while(cursor != NULL) {
        cout << (*cursor).data;
        cursor = cursor->link;
    }
}

void sort(int array[]) {
    //int size = sizeof(array)/sizeof(int);
    for(int i=0; i<29; i++)
        for(int j=i; j<29; j++)
            if(array[i] > array[j])
                swap(array[i], array[j]);
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{   
    if('5' > '6') cout << "oh";
    
    return 0;
}