# Prims-algorithm
# Prims-algorithm
Here is your complete **GitHub README.md** file updated according to your actual C++ code implementation:

---

# 🌳 Prim's Algorithm - Minimum Spanning Tree (MST)

This repository contains a **C++ implementation of Prim's Algorithm**, developed as part of the **Algorithms Lab (CSE208)** course at **Green University of Bangladesh**.

---

## 📌 Project Description

This program finds the **Minimum Spanning Tree (MST)** of a weighted, connected, and undirected graph using **Prim's Algorithm**.

The graph is represented using an **Adjacency Matrix**, and the algorithm follows a **Greedy strategy** to select the minimum weight edge at each step without forming a cycle.

---

## 🧠 Algorithm Explanation

* The algorithm starts from **Node 0**
* A `visited_node[]` array keeps track of included vertices
* In each iteration:

  * It searches for the **minimum weight edge**
  * The edge must connect:

    * One visited node
    * One unvisited node
* The selected edge is added to the MST
* The process continues until `(n - 1)` edges are selected

---

## ✨ Features of This Implementation

* ✔ Uses **Adjacency Matrix**
* ✔ Prevents cycle using `visited_node[]`
* ✔ Prints each selected edge
* ✔ Stores edge weights in `distances[]`
* ✔ Calculates total MST weight automatically
* ✔ Time Complexity: **O(V²)**
* ✔ Space Complexity: **O(V²)**

---

## ⚙️ How the Code Works

### 1️⃣ Input Phase

User inputs:

* Number of nodes
* Adjacency matrix values

### 2️⃣ Matrix Display

The program prints the entered matrix for verification.

### 3️⃣ MST Construction

Function: `VisitedNode(int row)`

* Marks `visited_node[0] = 1`
* Runs `(row - 1)` iterations
* Finds minimum connecting edge
* Marks new node as visited
* Stores edge weight
* Prints selected edge

### 4️⃣ Final Output

* Prints all selected edge weights
* Prints total MST cost

---

## 💻 Source Code

```cpp

## 📊 Sample Output Example

```
0 - 1 : 4
1 - 3 : 6
3 - 2 : 5
4 6 5
15

👤 Output:

<img width="308" height="421" alt="image" src="https://github.com/user-attachments/assets/06509a9b-d714-4ae6-831e-92d77b4b722e" />

<img width="306" height="424" alt="image" src="https://github.com/user-attachments/assets/1fa285bd-cce8-4c14-be3b-6ef5af55dce2" />
```

(Example only — depends on input matrix)

---

## 👤 Author

**Name:** Tushar Rajbongshi
**Student ID:** 242002140
**Course:** Algorithms Lab (CSE208)
**University:** Green University of Bangladesh

---

