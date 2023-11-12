#include "HashTable.h"
#include <algorithm>
#include <stdexcept>
#include <fstream>

HashTable::HashTable(){
    //The HashTable currently is hardcoded with a length of 50
    this->length = 50;
    for (int i=0; i < this->length; i++)
        this->buckets.push_back(std::vector<std::string>());
}

int HashTable::hashFunction(std::string value){
    //Calculate the ascii sum with the modulo of the length of the container
    int sum = 0;
    for (int i=0; i < value.length(); i++){
        sum += (char) value[i];
    }
    return sum/this->length;
}

int HashTable::checkBucket(std::string value, int index){
    //Helper functions to check if the given value exists in the current bucket
    std::vector<std::string> currentBucket = this->buckets[index];
    std::vector<std::string>::iterator it = std::find(currentBucket.begin(), currentBucket.end(), value);
    if (it != currentBucket.end()){
        //Returns the index of the value from the beginning of the vector (the value's index in the list)
        return it - currentBucket.begin();
    }
    return -1;
}

std::pair<int,int> HashTable::get(std::string value){
    //Using the helper functions, it checks the bucket list combination if the value is present, and return the index (or invalid one, in case the element doesn't exists)
    int bucketIndex = hashFunction(value);
    int listIndex = checkBucket(value, bucketIndex);
    if (listIndex == -1){
        return std::make_pair(-1,-1);
    }
    return std::make_pair(bucketIndex, listIndex);
}

std::string HashTable::getById(int bucketIndex, int listIndex){
    //Returns the string element at the given position
    if (bucketIndex <  0 || bucketIndex >= this->length)
        throw std::invalid_argument("Invalid bucket index.");
    
    std::vector<std::string> bucket = this->buckets[bucketIndex];
    if (listIndex <  0 || listIndex >= bucket.size())
        throw std::invalid_argument("Invalid list index.");

    return this->buckets[bucketIndex][listIndex];
}

std::pair<int,int> HashTable::add(std::string value){
    //First checking if the element exists, if not, the element is added at the end of the list of its respective bucket
    std::pair<int, int> index = get(value);
    if (index.first != -1){
        return index;
    }
    int bucketIndex = hashFunction(value);
    int listIndex = this->buckets[bucketIndex].size();
    this->buckets[bucketIndex].push_back(value);
    return std::make_pair(bucketIndex, listIndex);
}

void HashTable::printHashTable(std::ofstream& out){
    for (int i=0; i<this->buckets.size(); i++){
        out << i << " -> [";
        for (int j=0; j<this->buckets[i].size(); j++){
            out << this->buckets[i][j] << ", ";
        }
        out << "]" << std::endl;
    }
}