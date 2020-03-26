
#include <bits/stdc++.h>
using namespace std;
class Node {
    private:
        int data;
    public:
        Node* prev;
        Node* next;
        Node(int);
        int get_data();
};

class NodeList {
    private:
        Node* head;
        Node* tail;
        int list_size;
    public:
        NodeList();
        void initList(int);
        void printList();
        void append(Node*);
        void remove(Node*);
};

Node::Node(int data){
    this->data = data;
}

NodeList::NodeList(){
    this->head = NULL;
    this->tail = NULL;
    this->list_size = 0;
}
void NodeList::initList(int n){
    for (int i = 1; i <= n; i++){

        this->append(new Node(i));
    }
    
}
void NodeList::printList(){
    Node* temp = this->tail;
    while(temp){
        std::cout << temp->get_data() << " ";
        temp = temp->prev;
    }
    std::cout << std::endl;
}

//You need to implement 6 functions. Do not change above functions.
//append new node on tail
void NodeList::append(Node* new_node){

  if (this->head == NULL){
    this->head= this->tail = new_node;
    this->list_size += 1;
  }
  else{
    new_node->prev =this->tail;
    new_node->next = NULL;
    this->tail->next = new_node;
    this->tail = new_node;
    this->list_size += 1;
  }
}
//remove specific node
void NodeList::remove(Node* node){
  Node* cur_node = this->head;
  while(cur_node != NULL){
    if (cur_node->get_data() == node->get_data()){
      //if it is not the first node
      if (cur_node->prev != NULL){
        cur_node->prev->next = cur_node->next;
        cur_node->next->prev = cur_node->prev;
      }
      else{
        //othrewise
        this->head = cur_node->next;
        cur_node->next->prev = NULL;
      }

    }

    cur_node = cur_node->next;
  }
  free(node);
  this->list_size -= 1;
 // cout << this->list_size << endl;
}

void solve(){
  bool f;

  while(1){

  }
}

  

int main(){
  //Example main function
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    NodeList node_list;
    int n;
    cin >> n;
    node_list.initList(n);
    node_list.printList();
    

}
