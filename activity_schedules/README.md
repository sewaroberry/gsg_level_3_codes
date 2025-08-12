## Assignment: Activity Schedules (No Two Consecutive Activities)

**Problem Statement:**  
Given a number of days `n` (1 ≤ n ≤ 10), list all possible sequences of daily activities using the set:  
`{"Swimming", "Running", "Football"}`  
with the constraint that **no two consecutive days** can have the same activity.

---

### Example Run
**Input**
2

**Output**
Football Running  
Football Swimming  
Running Football  
Running Swimming  
Swimming Football  
Swimming Running  
COUNT: 6  

---

### Expected COUNT Formula
For `n` days:  
Total schedules = 3 × 2^(n - 1)

- **Example:** n = 2 → 3 × 2^(2-1) = 6 
