class LRUCache: public Cache{
    public:
    LRUCache(int size) {
        cp = size;
    }
    void set(int, int);
    int get(int);
}; 

void LRUCache::set(int key, int val) {
    //case1: map is empty, just put key and val(Node) there
    if(mp.empty())
    {
        Node* N = new Node(key, val);
        mp[key] = N;
        head = tail = N;
        //std::cout << "key: " << key << std::endl;
        //std::cout << "val: " << val << std::endl;
        return;
    }
    else // map is not empty
    {      
        std::map<int, Node*>::iterator it = mp.find(key);
        
       
        // if key is found in the map
        if(it != mp.end())
        {
            // assign the value
            it->second->value = val;
            
            if(head == it->second)
            {
                /*
                std::cout << "case 1" << std::endl;
                std::cout << "key: " << key << std::endl;
                std::cout << "val: " << val << std::endl;
                */
                return;
            }
                
            it->second->prev->next = it->second->next;
            
            if(tail == it->second)
            {
                /*
                std::cout << "case 2" << std::endl;
                std::cout << "key: " << key << std::endl;
                std::cout << "val: " << val << std::endl;
                */
                //it->second->next = head;
                tail = tail->prev;
                //it->second->prev = NULL;
                //head = it->second;
            }   
            else
            {
                /*
                std::cout << "case 3" << std::endl;
                std::cout << "key: " << key << std::endl;
                std::cout << "val: " << val << std::endl;
                */
                it->second->next->prev = it->second->prev;
                //head->prev = it->second;
                //head = it->second;
            }
            
            it->second->next = head;
            it->second->prev = NULL;
            head->prev = it->second;
            head = it->second;
        }
        // if key is not found in the map
        else
        {
            Node* N  = new Node(NULL, head, key, val);
            head->prev = N;
            head = N; 
            mp[key] = N;
            
            
            if(mp.size() > cp)
            {
                /*
                std::cout << "case 5" << std::endl;
                std::cout << "key: " << key << std::endl;
                std::cout << "val: " << val << std::endl;
                */
                tail = tail->prev;
                mp.erase(tail->next->key); 
                delete tail->next;
                tail->next = NULL;
            }
            

        }

    }
    
}

int LRUCache::get(int key) {
    std::map<int, Node*>::iterator it = mp.find(key);
    if(it != mp.end())
        return it->second->value;
    return -1;
}
