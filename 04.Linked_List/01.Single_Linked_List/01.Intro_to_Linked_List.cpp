#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
    }
};
class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = NULL;
        }
};

int main(){
    LinkedList l;
    return 0;
}
// Time Complexity: O(1)
// Space Complexity: O(1)
