# Algorithm Theory, Datasructures

---

## Table of Content
[Elementary Algorithms](#elementary-algorithms)

---

## Elementary
| | |
| ----------- | ----------- |
| Sum      | Összegzés(Sorozatszámítás) |
| Decision | Eldöntés tétele |
| Selection| Kiválasztás |
| Count| Megszámlálás |
| Max / Min| Maximum / Minimumkiválasztás |

## Set
| | |
| ----------- | ----------- |
| Union | Unióképzés |
| Intersection | Metszetképzés |
| | |

## Search
| | |
| ----------- | ----------- |
| Linear Search | Lineáris keresés |
| Binary / Logarithmic Search | Bináris / Logaritmikus keresés |
| | |

## Sorting
| Simple Sorts | |
| ----------- | ----------- |
| X | Rendezés közvetlen kiválasztással |
| X | Rendezés minimum kiválasztással |
| Insertion Sort | Egyszerű beillesztéses rendezés |
| | |

| Efficient sorts | |
| ----------- | ----------- |
| Sheelsort | Shell-módszer beszúrással |
| Quicksort | Gyorsrendezés |
| | |

| Bubble Sort + Variants | |
| ----------- | ----------- |
| Bubble Sort | Buborék rendezés |
| Comb sort | Összefésülő rendezés |
| | |

---

### Sum ( ∑ )
How many elements are there with property T in the array?

### Decision
Is there an element of T property in the array?
We are unaware if there is an element like that.

### Selection
We are aware that there is an element with T property in the array.
What is the very first element's index?

### Count
We return the amount of elements inside the array with property T.

### Copy
We put all elements with property T into a separate array.

### Max / Min value
Return the element with the greatest, lowest value or their index in the array.

---

### Union ( A∪B )
**!!! We assume that none of the input contains duplicates of the same element !!!**

![](assets/img/union.png)  
**IN**:	A, B arrays  

**ALGO**  
1. Copy all elements from A into C
2. Select elements from B and put them into C if they are not yet present in C

**OUT**: C array

### Intersection ( A∩B )
**!!! We assume that none of the input contains duplicates of the same element !!!**

![](assets/img/intersection.png)  

**IN**:	A, B arrays  

**ALGO**  
1. Check all elements of A with all elements of B and if both have the same element put it into C.

**OUT**: C array

---

### Linear Search
Is there an element of T property in the array?
If there is, what place does it occupies in the array?

### Binary / Logaritmic Search
Input has to be in sorted order.
Is there an element in the array?
What is the very first element's index?
We always try to find a new middle inside the array, that way we can completely ignore one of the sides we are sure the answer isn't in. 

---

### Sorting

