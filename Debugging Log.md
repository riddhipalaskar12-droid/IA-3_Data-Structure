
# Debugging Log

**PRN:** 202501100040

**Scenario:** Cold-drink Flavours

**Hash Method:** Division Method

**Collision Handling:** Linear Probing

**Table Size:** 23

## Commit 1 – Personalized Dataset

I created the personalized dataset using the given PRN-based formula with seed 40. I added all 20 values to the C++ program and checked that the dataset contained the correct values. The program was compiled and executed successfully without any compilation errors.

## Commit 2 – Division Hash Function

I implemented the Division Method hash function using the formula key % 23. The function calculates the hash index by dividing each key by the table size and taking the remainder. I tested the function with different dataset values and verified the calculated indexes.

## Commit 3 – Hash Table Structure

Created the hash table using an integer array of size 23. Initially, all positions were initialized to -1 to represent empty slots. A display function was also added to show the contents of the hash table. The program compiled successfully.

## Commit 4 – Insertion Operation

Implemented the insertion function to store the personalized values at their calculated hash indexes. Initially, direct insertion worked only when the calculated position was empty. When two values generated the same index, a collision occurred.

## Commit 5 – Linear Probing

Implemented Linear Probing to resolve collisions. When the calculated index was already occupied, the program checked the next available position. The index was updated using modulo 23 to ensure that the search continued from the beginning if the end of the table was reached.

## Commit 6 – Collision Detection

Added collision detection to the insertion function. Whenever an occupied position was encountered, the collision counter was incremented and a collision message was displayed. The program successfully handled collisions without losing any inserted values.

## Commit 7 – Search and Verification

Implemented a search function using the Division Method. The function calculates the hash index and checks the following positions using linear probing until the required key is found or an empty position is reached. All 20 personalized values were successfully verified.

## Commit 8 – Final Testing and Validation

Performed final testing of the hash table program. Verified that all 20 personalized values were inserted successfully. Also tested the search function using 9999, which was not present in the dataset. The program correctly reported that the value was not found.

## Failed Approach – Direct Insertion Without Collision Handling

Initially, I tried inserting each value directly into its calculated hash index. However, when two keys generated the same index, the existing value could be overwritten or the insertion could fail. This approach did not handle collisions correctly. Therefore, I abandoned direct insertion and implemented Linear Probing to find the next available position. After implementing this method, all 20 values were stored successfully.
