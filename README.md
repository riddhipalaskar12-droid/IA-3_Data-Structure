
# Hash Table Implementation using C++

### Student Details
- **PRN:** 202501100040
- **Subject:** Data Structures
- **Scenario:** Cold-Drink Flavours

## 1. Project Description

This project implements a Hash Table using C++. It stores a personalized dataset of 20 cold-drink flavour values using the Division Method and Linear Probing for collision resolution.

The project demonstrates the concepts of hashing, hash table insertion, collision detection, searching and verification.

## 2. Personalization Details

| Parameter | Value |
|---|---|
| PRN | 202501100040 |
| Seed | 40 |
| Scenario | Cold-Drink Flavours |
| Dataset Size | 20 |
| Hash Method | Division Method |
| Collision Handling | Linear Probing |
| Hash Table Size | 23 |

## 3. Personalized Dataset

The dataset is generated using the formula:

`v[i] = (S + 13 * i) % 100`

Where S = 40 and i = 0 to 19.

Dataset:

```text
40, 53, 66, 79, 92, 5, 18, 31, 44, 57,
70, 83, 96, 9, 22, 35, 48, 61, 74, 87
```

## 4. Hash Function

The Division Method is used to calculate the hash index.

`h(key) = key % 23`

## 5. Collision Resolution

Linear Probing is used to resolve collisions.

If the calculated index is already occupied, the next available position is checked.

`index = (index + 1) % 23`

## 6. Features

- Personalized dataset generation.
- Division Method hash function.
- Hash table implementation using an array.
- Collision detection.
- Linear Probing for collision resolution.
- Searching and verification of values.
- Display of the final hash table.

## 7. Technologies Used

- Programming Language: C++
- IDE: Dev-C++ / VS Code
- Version Control: Git
- Repository: GitHub

## 8. Project Files

| File | Description |
|---|---|
| HashTable.cpp | Main C++ source code |
| DEBUGGING_LOG.md | Development and debugging details |
| TRACE_MATCH_REPORT.md | Predicted and actual hash table comparison |
| GIT_LOG.txt | Git commit history |

## 9. Conclusion

The project successfully demonstrates the implementation of a hash table using the Division Method and Linear Probing. All 20 personalized values are inserted and verified through the search operation. The project helps understand hashing and collision resolution techniques in Data Structures.
