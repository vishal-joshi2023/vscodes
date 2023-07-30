#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* links[2];
    
    bool containsKey(int bit){
        return (links[bit]!=NULL);
    }
    void put(int bit,Node *n){
        links[bit]=n;
    }

    Node* get(int bit){
        return links[bit];
    }

};

class Tries{
  public:
  
  Node *root;
  
  Tries(){
      root = new Node();
  }

  void insert(int num){
      Node* node = root;

      for(int i=31;i>=0;i--){
          int Bit = (num>>i) & 1;

          if(!node->containsKey(Bit)){
              node->put(Bit,new Node());
          }

          node= node->get(Bit);
      }
  }

  int maxXor(int num){
      Node* node = root;
      int maxi = 0;

      for(int i=31;i>=0;i--){

          int bit = (num>>i) & 1;

          if(node->containsKey(1-bit))//check ooppos bit
          {
            maxi = (1<<i) | maxi ; 
            node = node->get(1-bit);
          }
          else 
            node = node->get(bit);
      }

      return maxi;
  }

};


int main()
{

    vector<int> a{6, 6, 0, 6, 8, 5, 6};
    vector<int> b{1, 7, 1, 7, 8, 0, 2};
    Tries t;
     
    for(int num:a){
        t.insert(num);
    } 
    
    int maxi=0;
    for(int num:b ){
        maxi = max(maxi,t.maxXor(num));
    }

   cout<<maxi;
}