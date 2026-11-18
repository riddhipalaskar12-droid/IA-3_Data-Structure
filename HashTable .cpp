
#include <iostream>
using namespace std;

const int DATA_SIZE = 20;
const int TABLE_SIZE = 23;

int flavours[DATA_SIZE] = {
    40, 53, 66, 79, 92,
    5, 18, 31, 44, 57,
    70, 83, 96, 9, 22,
    35, 48, 61, 74, 87
};

int hashTable[TABLE_SIZE];
int collisionCount = 0;

// Division Method Hash Function
int divisionHash(int key) {
    return key % TABLE_SIZE;
}

// Insert using Linear Probing
void insertKey(int key) {

    int index = divisionHash(key);
    int startIndex = index;

    if (hashTable[index] != -1) {
        collisionCount++;

        cout << "Collision detected: "
             << key << " at index "
             << index << endl;

        while (hashTable[index] != -1) {
            index = (index + 1) % TABLE_SIZE;

            if (index == startIndex) {
                cout << "Hash Table is Full!" << endl;
                return;
            }
        }
    }

    hashTable[index] = key;

    cout << "Inserted: " << key
         << " at index " << index << endl;
}

// Search for a key
bool searchKey(int key) {

    int index = divisionHash(key);
    int startIndex = index;

    while (hashTable[index] != -1) {

        if (hashTable[index] == key) {
            return true;
        }

        index = (index + 1) % TABLE_SIZE;

        if (index == startIndex) {
            break;
        }
    }

    return false;
}

// Display Hash Table
void displayTable() {

    cout << "\nFinal Hash Table:\n";

    for (int i = 0; i < TABLE_SIZE; i++) {

        cout << i << " : ";

        if (hashTable[i] == -1)
            cout << "EMPTY";
        else
            cout << hashTable[i];

        cout << endl;
    }
}

int main() {

    // Initialize Hash Table
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }

    cout << "COLD DRINK FLAVOURS HASH TABLE\n";
    cout << "PRN: 202501100040\n";

    cout << "\nInserting values:\n";

    for (int i = 0; i < DATA_SIZE; i++) {
        insertKey(flavours[i]);
    }

    displayTable();

    cout << "\nSearching and Verifying Values:\n";

    int foundCount = 0;

    for (int i = 0; i < DATA_SIZE; i++) {

        if (searchKey(flavours[i])) {
            foundCount++;
        }
    }

    cout << "Total values found: "
         << foundCount << "/" << DATA_SIZE << endl;

    int testKey = 9999;

    if (searchKey(testKey))
        cout << "Unexpected: Value found!" << endl;
    else
        cout << "Search test passed: "
             << testKey << " not found." << endl;

    cout << "\nTotal Collisions: "
         << collisionCount << endl;

    return 0;
}
