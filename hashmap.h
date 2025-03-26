// HashMap is a data structure in which the elements are stored in key-value pairs 
//such that every key is mapped to a value using a hash function.
//In C++, hash maps are implemented using the unordered_map container class
//average timecomplexity for search,insert,delete is o(1) space complexity is also o(1)
//use case: maintainig a collection of unique keys,no duplicates. SO user names to passwords
//counting occurances, and has direct access making it very useful

#include <unordered_map>
using namespace std;

int main(){
//creating the map
unordered_map<string,int> umap;
//inserting items into the map.LEFT is key right is its value
umap["apple"] = 10;
umap["mango"] = 20;
//can also insert using
umap.insert(make_pair("date",4));
umap.insert({"elderberry", 5}); //for cpp11
  
myHashMap.erase("banana");//delete an element
  
cout << "value of apple: " << umap["apple"] << endl;//accessing element
  
  
//print the pairs in the map
  for(auto it : umap){
    cout << it.first << " " << it.second;
  }
    // 4. Check if a key exists
  if (umap.find("grape") != umap.end()) {
    cout << "Key 'grape' exists" << endl;
  } else {
    cout << "Key 'grape' does not exist" << endl;
  }

  
}
