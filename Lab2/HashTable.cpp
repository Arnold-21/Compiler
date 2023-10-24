#include "HashTable.h"
#include <algorithm>
#include <stdexcept>
#include <iostream>

HashTable::HashTable(){
    this->length = 50;
    for (int i=0; i < this->length; i++)
        this->buckets.push_back(std::vector<std::string>());
}

int HashTable::hashFunction(std::string value){
    int sum = 0;
    for (int i=0; i < value.length(); i++){
        sum += (char) value[i];
    }
    return sum/this->length;
}

int HashTable::checkBucket(std::string value, int index){
    std::vector<std::string> currentBucket = this->buckets[index];
    std::vector<std::string>::iterator it = std::find(currentBucket.begin(), currentBucket.end(), value);
    if (it != currentBucket.end()){
        return it - currentBucket.begin();
    }
    return -1;
}

std::pair<int,int> HashTable::get(std::string value){
    int bucketIndex = hashFunction(value);
    int listIndex = checkBucket(value, bucketIndex);
    if (listIndex == -1){
        return std::make_pair(-1,-1);
    }
    return std::make_pair(bucketIndex, listIndex);
}

std::string HashTable::getById(int bucketIndex, int listIndex){
    if (bucketIndex <  0 || bucketIndex >= this->length)
        throw std::invalid_argument("Invalid bucket index.");
    
    std::vector<std::string> bucket = this->buckets[bucketIndex];
    if (listIndex <  0 || listIndex >= bucket.size())
        throw std::invalid_argument("Invalid list index.");

    return this->buckets[bucketIndex][listIndex];
}

std::pair<int,int> HashTable::add(std::string value){
    std::pair<int, int> index = get(value);
    if (index.first != -1){
        return index;
    }
    int bucketIndex = hashFunction(value);
    int listIndex = this->buckets[bucketIndex].size();
    this->buckets[bucketIndex].push_back(value);
    return std::make_pair(bucketIndex, listIndex);
}