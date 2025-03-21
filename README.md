# 🌟 **Algo Visualization** 🌟

![sorting](https://github.com/user-attachments/assets/a6a51aaf-5c86-4960-9a0e-4a699b8c2c9d)

#

[![C++](https://img.shields.io/badge/C%2B%2B-DSA_Library-blue?style=for-the-badge&logo=cplusplus&logoColor=white)](https://github.com/ARI-900/DSA-LIBRARY)
[![Contributions](https://img.shields.io/badge/Contributions-Welcome-orange?style=for-the-badge)](CONTRIBUTING.md)


> **A visual learning platform for Sorting Algorithms in C++!**  
This project offers an engaging, animated experience to help you understand the fundamental mechanics of various sorting algorithms. By leveraging C++ along with a graphics library, it transforms abstract algorithmic concepts into clear, step-by-step visual demonstrations. Whether you are a beginner exploring the basics of BubbleSort or an advanced learner delving into QuickSort partitioning, this project provides intuitive insights into how sorting works. Each module is designed to be modular and extensible, making it easy to integrate additional algorithms or enhance existing visualizations. Embrace the world of algorithms with a tool that is as educational as it is visually appealing!


## 📖 **Table of Contents**

- [Overview](#overview)
- [Features](#features)
- [Design Diagram](#design-diagram)
- [Visualizations](#visualizations)
  - [BubbleSort](#bubblesort-visualization)
  - [SelectionSort](#selectionsort-visualization)
  - [InsertionSort](#insertionsort-visualization)
  - [QuickSort](#quicksort-visualization)
  - [MergeSort](#mergesort-visualization)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [Author](#author)
- [License](#license)

---

## 💻 **Overview**

This project is designed to help you visually understand sorting algorithms. It provides animated visualizations for:
- **BubbleSort**
- **SelectionSort**
- **InsertionSort**
- **QuickSort**
- **MergeSort** *(Coming Soon)*

Future plans include extending the project to include graph traversal algorithms.

---

## 🚀 **Features**

- 📦 **Interactive Visualizations:** Step-by-step animated representations of sorting.
- 🔧 **Color-Coded Actions:** Different colors indicate active elements (swapping, pivot, etc.).
- 🌐 **Modular Design:** Each sorting algorithm is implemented as its own class.
- 🛠️ **Expandable:** Easily add more algorithms or extend to other visualization techniques.

---



## Design Diagram

Below is a class diagram that outlines the structure of the project:

```mermaid
classDiagram
    class Main {
      +main()
    }
    class BubbleSort {
      +BubbleSort()
      +displayArray(arr, n, margin)
      +bubbleSort(arr, n, margin)
      -swap(a, b)
    }
    class SelectionSort {
      +SelectionSort()
      +displayArray(arr, n, margin, pivot, bar1, bar2)
      +selectionSort(arr, n, margin)
    }
    class InsertionSort {
      +InsertionSort()
      +displayArray(arr, n, margin, pivot, bar1, bar2)
      +insertionSort(arr, n, margin)
    }
    class QuickSortVisualizer {
      +QuickSortVisualizer()
      +displayArray(arr, n, margin, pivot, bar1, bar2)
      +partition(arr, low, high, margin, n)
      +quickSort(arr, low, high, margin, n)
    }
    class MergeSortVisualizer {
      +MergeSortVisualizer()
      +displayArray() 
      +mergeSort() 
      +merge()
    }
    Main --> BubbleSort
    Main --> SelectionSort
    Main --> InsertionSort
    Main --> QuickSortVisualizer
    Main --> MergeSortVisualizer


```

#


### BubbleSort Visualization

**Description:** Animates the BubbleSort process with real-time swapping.

**Photo:**  
<img src="./images/bubble_sort.png" alt="BubbleSort Visualization" width="400">

**Video:**  
[BubbleSort Demo](./videos/bubble_sort_demo.mp4)

**How It Works:**
- Array elements are shown as vertical bars.
- Bar heights indicate the values.
- Two bars are highlighted during comparisons.
- If out-of-order, bars swap positions.
- Color changes highlight active elements.
- A delay between steps lets you follow the process.


#


### SelectionSort Visualization

**Description:** Illustrates the SelectionSort algorithm by highlighting the smallest element and swapping.

**Photo:**  
<img src="./images/selection_sort.png" alt="SelectionSort Visualization" width="400">

**Video:**  
[SelectionSort Demo](./videos/selection_sort_demo.mp4)

**How It Works:**
- Array elements are represented as bars.
- The algorithm iterates to find the minimum element.
- The smallest element is highlighted.
- Once identified, it swaps with the first unsorted element.
- The process repeats until the array is sorted.



#


### InsertionSort Visualization

**Description:** Demonstrates the InsertionSort process with shifting and repositioning of elements.

**Photo:**  
<img src="./images/insertion_sort.png" alt="InsertionSort Visualization" width="400">

**Video:**  
[InsertionSort Demo](./videos/insertion_sort_demo.mp4)

**How It Works:**
- Array elements are displayed as bars.
- Starts from the second element, comparing with previous ones.
- The current element is shifted to its correct position.
- Active elements are highlighted during comparisons.
- The array gradually becomes sorted with each insertion.



#



### QuickSort Visualization

**Description:** Shows the QuickSort process with pivot selection and partitioning.

**Photo:**  
<img src="./images/quick_sort.png" alt="QuickSort Visualization" width="400">

**Video:**  
[QuickSort Demo](./videos/quick_sort_demo.mp4)

**How It Works:**
- Array elements are displayed as bars.
- A pivot element is selected and highlighted.
- The array is partitioned into elements less than and greater than the pivot.
- Active comparisons and swaps are animated.
- The process recurses until the array is fully sorted.
