#include <vector>
#include <string>
#include <fstream>

class HashTable {
	private:
		int length;
		std::vector<std::vector<std::string>> buckets;

		int hashFunction(std::string value);
		int checkBucket(std::string value, int index);

	public:
		HashTable();

		std::pair<int,int> add(std::string value);

		std::pair<int,int> get(std::string value);

		std::string getById(int bucketIndex, int listIndex);

		int size();

		void printHashTable(std::ofstream& out);
};