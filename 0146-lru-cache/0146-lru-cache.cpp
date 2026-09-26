class LRUCache {
public:
    class Node {
    public:
        int key;
        int val;
        Node* next;
        Node* prev;
        Node(int k, int v) {
            key = k;
            val = v;
            next = prev = nullptr;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    unordered_map<int, Node*> mp;

    int limit;

     void addNode(Node*newNode){
       Node*oldNode=head->next;
       head->next=newNode;
       newNode->next=oldNode;
       oldNode->prev=newNode;
       newNode->prev=head;
     }

     void deleteNode(Node*oldNode){
        Node*oldprev=oldNode->prev;
        Node*oldnext=oldNode->next;
        
        oldprev->next=oldnext;
        oldnext->prev=oldprev;
     }


    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {

      //key not find
      if(mp.find(key)==mp.end()){
        return -1;
      }


     //we have to move to frequently  (mean push at front)

     Node*ansNode=mp[key];
     int ans=ansNode->val;

      mp.erase(key);
      deleteNode(ansNode);

      //add in front
      addNode(ansNode);
      mp[key]=ansNode;  //store in map
      return ans;

    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node* oldNode = mp[key];
            deleteNode(oldNode);
            mp.erase(key);

            delete oldNode;
        }

        // case if the cache is full
        if (mp.size() == limit) {
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        mp[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */