# JAVA Word Search in Matrix

This project implements a **Word Search Puzzle** solver in C. It searches for the pattern `"JAVA"` within a randomly generated grid of characters.

## ⚙️ Logic

1.  **Generation:** Fills an $N \times N$ matrix randomly with `J`, `A`, and `V`.
2.  **Search Algorithm:**
    * Iterates through every cell.
    * If a `J` is found, it checks all **8 Compass Directions** (North, South, East, West, and Diagonals).
    * Target Sequence: `Mat[i] == 'J'` $\to$ `Mat[i+1] == 'A'` $\to$ `Mat[i+2] == 'V'` $\to$ `Mat[i+3] == 'A'`.
3.  **Filtering:** Preserves the found words and replaces unrelated characters with `_`.

## 🚀 Example Output

**Random Matrix:**
```text
J A V A V
A A J J A
V J V A V
A A A V A
J A V A J
