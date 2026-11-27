class MyLinkedList {
public:
    class Node{
        public:
        int val ; 
        Node* next ; 
        Node(int v) {
            val = v ; 
            next = NULL ;
        }
    } ;
    Node* head ;
    Node* tail ; 
    MyLinkedList() {
        head = NULL ; 
        tail = NULL ; 
    }
    
    int get(int index) {
        if(head==NULL) {
            return -1 ; 
        }
        if(index < 0) {
            return -1 ; 
        }
        Node* temp = head ;
        for(int i=0 ; i<index ; i++) {
            temp = temp->next ; 
            if(temp == NULL) {
                return -1 ; 
            }
        }
        return temp->val ; 
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val) ; 
        if(head == NULL) {
            head = tail = newNode ;
            
        }
        else {
            newNode->next = head ; 
            head = newNode ; 
        }
        return ;
        
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val) ; 
        if(head == NULL) {
            head = tail = newNode ; 
        }
        else {
            tail->next = newNode ; 
            tail = newNode ; 
        }
        return ;
    }
    
    void addAtIndex(int index, int val) {
        if(head == NULL && index!=0) {
            return ; 
        }
        if(index == 0) {
            addAtHead(val) ; 
            return ; 
        }
        Node* temp = head ; 
        Node* prev = head ;
        for(int i =0 ; i<index ; i++) {
            if(temp == NULL) {
                return ;
            }
            prev = temp ; 
            temp = temp->next ; 
            
        }
        if(temp==NULL) {
           addAtTail(val) ; 
           return ; 
        }
        else {
            Node* newNode = new Node(val) ; 
            prev->next = newNode ; 
            newNode->next = temp ; 
        }
        return ; 
    }

    
    void deleteAtIndex(int index) {
        if(head == NULL) {
            return ;
        }
        if(index < 0) {
            return ; 
        }
        Node* temp = head ; 
        Node* prev = head ;
        if(head->next== NULL && index==0) {
            head = tail = NULL ;
            return ; 
        }
        if(index == 0) {
           temp = head ; 
           head = head->next ; 
           delete temp ; 
           return ;
        }
        for(int i=0 ; i<index ; i++) {
           
            prev = temp ; 
            temp = temp->next ;
             if(temp == NULL) {
                return ; 
            }
        }
        if( temp == tail){
            prev->next = NULL ; 
            tail = prev ; 
            delete temp ; 
            return ;
        }
        else {
            prev->next = temp->next ; 
            delete temp ; 
            return ; 
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */