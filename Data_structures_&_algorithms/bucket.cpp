#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
template<typename V>
class MapNode{
    public:
        string key;
        V value;
        MapNode* next;

        MapNode(string key,int value){
            this->key = key;
            this->value = value;
            next = NULL;
        }

        ~MapNode(){
            delete next;
        }
    };    
class ourmap{
    MapNode<V>**  buckets;
    int size;
    int numBuckets;
    public:
    ourmap(){
        size=0;
        numBuckets = 5;
        buckets = new MapNode<V>*[numBuckets];
        for(int i=0;i<numBuckets;i++){
            buckets[i] = NULL;
        }
    }
        ~ourmap(){
            for(int i=0;i<numBuckets;i++){
                delete buckets[i];
            }delete [] buckets;
        }
        int size(){
            return count;
        }
        V getValue(string key){
            
        }
        private:
        int getBucketIndex(string key){
            int hashcode = 0;
            int currentcoeff = 1;
            for(int i=key.length()-1;i>=0;i--){
                hashcode += key[i]*currentcoeff;
                hashcode = hashcode%numBuckets;
                currentcoeff *= 37;
                currentcoeff = currentcoeff % numBuckets;
            }
            return hashcode % numBuckets;
        }
        public:        
        void insert(string key,V value){
            int bucketIndex = getBucketIndex(string key);
            MapNode<V>* head = buckets[bucketIndex];
            while(head!=NULL){
                if(hed->key = key){
                    head->value = value;
                }
                hed = head->next;
                return;
            }
            head = buckets[bucketIndex];
            MapNode<V>* node = new MapNode<V>(key,value);
            node->next = head;
            buckets[bucketIndex] = node;
            count++;
        }

        V remove(string key){

        }
    
    }

int main(){
    cout<<"hello world"<<endl;
    
    return 0;
}
