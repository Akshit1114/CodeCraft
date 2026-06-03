#include <bits/stdc++.h>
using namespace std;

// ---------------------- concept --------------------------
// int main () {
//     char some =  'A' + 1;
//     cout << some;
// }


int main () {
    int num = 5;
    for (int i = 0; i<num; i++) {
        for (char j = 'A'; j <= 'A' + i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// A 
// A B
// A B C
// A B C D
// A B C D E

/*
**Character Arithmetic (`'A' + i`):**

**What happens:**
- `'A'` is stored as **65** (ASCII value)
- `'A' + 1` = 66 = `'B'`
- `'A' + 2` = 67 = `'C'`
- Characters are just numbers that you can do math on!


for (int i = 0; i < num; i++) {
    for (char j = 'A'; j <= 'A' + i; j++) {
        cout << j << " ";
    }
}

- When `i=0`: prints `A`
- When `i=1`: prints `A B`
- When `i=2`: prints `A B C`
- Pattern: Each row prints one more letter

| Aspect | Explanation |
|--------|-------------|
| **Storage** | Computers only store **numbers** (65, 66, 67...) |
| **ASCII** | Mapping system: 65='A', 66='B', 67='C' |
| **Display** | Data type tells `cout` how to interpret |

char letter = 65;   cout << letter;  // Prints: A
int number = 65;    cout << number;  // Prints: 65
```

**Key point:** Same number (65), different output based on **data type**
- `char` → `cout` looks up ASCII → prints letter
- `int` → `cout` prints number directly
*/