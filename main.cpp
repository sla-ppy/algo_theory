#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

void Sum(const std::vector<int> &A) {
    int sum{0};

    for (int i : A) {
        sum += i;
    }

    std::cout << sum << '\n';
}
void Count(const std::vector<int> &A) {
    int property{15};

    int count{0};
    for(int i : A) {
        if (A[i] == property) {
            count++;
        }
    }

    std::cout << count << '\n';
}
void Decision(const std::vector<int> &A) {
    int property{15};

    int i{0};
    // while loop since we stop at the very first element with the property, waste of resources to loop through the full array
    while(i < A.size() && A[i] != property) {
        i++;
    }

    if(i < A.size()) {
        std::cout << "Element with property found!" << '\n';
    } else {
        std::cout << "No element found with the property!" << '\n';
    }
}
void Selection(const std::vector<int> &A) {
    // we are aware that there is an element with the property inside the A
    int property{15};

    int i{0};
    while(A[i] != property) {
        i++;
    }

    std::cout << i << '\n';
}
void Copy(const std::vector<int> &A) {
    std::vector<int> result;
    int property{15};

    int amount{0};
    for(int i : A) {
        if (A[i] == property) {
            result.push_back(A[i]);
            amount++;
        }
    }

    for (int j : result) {
        std::cout << j << '\n';
    }
}
int MinValue(const std::vector<int> &A) {
    int result{A[0]};

    for (int i : A) {
        if (result > i) {
            result = i;
        }
    }

    return result;
}
int MaxValue(const std::vector<int> &A) {
    int result{A[0]};

    for (int i : A) {
        if (result < i) {
            result = i;
        }
    }

    return result;
}

void Union(const std::vector<int> &A, const std::vector<int> &B) {
    std::vector<int> result;

    // 1. copy A into C
    result = A;

    // 2. copy B into C, check for duplicates
    for (int j : B) {
        // check if element exists
        if(std::find(A.begin(), A.end(), j) == A.end()) {
            result.push_back(j);
        }
    }

    // C
    for (int i : result) {
        std::cout << i << '\n';
    }
}
void Intersection(const std::vector<int> &A, const std::vector<int> &B) {
    std::vector<int> result;

    for (int a : A) {
        for (int b : B) {
            // when the elements are the same, they are in both
            if (a == b) {
                result.push_back(a);
            }
        }
    }

    // C
    for (int i : result) {
        std::cout << i << '\n';
    }
}

void LinearSearch(const std::vector<int> &A) {
    // linear_search == decision + selection
    int property{15};

    int i{0};
    while(i < A.size() && A[i] != property) {
        i++;
    }

    int result{0};

    if (i < A.size()) {
        result = i;
    } else {
        result = -1;
    }

    std::cout << result << '\n';
}
void LogarithmicSearch(const std::vector<int> &A_sorted) {
    // the input has to be sorted!
    int property{41};
    int result{0};
    int lower_range{0};
    int upper_range = A_sorted.size() - 1;

    int i{0};
    do {
        i = (lower_range + upper_range) / 2;
        if(A_sorted[i] < property) {
            lower_range = i++;
        }
        if(A_sorted[i] > property) {
            upper_range = i--;
        }
    } while (lower_range <= upper_range && A_sorted[i] != property);

    if(lower_range <= upper_range) {
        result = i;
    } else {
        result = -1;
    }

    std::cout << result << '\n';
}

// FIXME: naming for sorting algos
void SelectionSort(const std::vector<int> &A) {
    std::vector<int> result = A;

    for(int i : result) {
        std::cout << i << '\n';
    }

    // 1. pick lowest element
    for (int i = 0; i < result.size() -1; ++i) {
        for (int j = i +1; j < result.size(); ++j) {
            if (result[j] < result[i]) {
                int cache = result[j];  // std::swap() does the same thing!
                result[j] = result[i];
                result[i] = cache;
            }
        }
    }

    std::cout << "------AFTER SORTING------" << '\n';
    for(int i : result) {
        std::cout << i << '\n';
    }
}
void AnotherSort(const std::vector<int> &A) {
    std::vector<int> result = A;

    for(int i : result) {
        std::cout << i << '\n';
    }

    for (int i = 0; i < result.size() -1; ++i) {
        int index{i};
        int value = result[i];

        for (int j = i +1; j < result.size(); ++j) {
            if (value > result[j]) {
                value = result[j];
                index = j;
            }
        }

        result[index] = result[i];
        result[i] = value;
    }

    std::cout << "------AFTER SORTING------" << '\n';
    for(int i : result) {
        std::cout << i << '\n';
    }
}
// FIXME: bubble sort is unfinished
void BubbleSort(const std::vector<int> &A) {
    std::vector<int> result = A;

    for(int i : result) {
        std::cout << i << '\n';
    }

    for (auto it = result.end(); it != result.begin(); ++it) {
        for (auto jt = it +1; jt < it; ++jt) {

        }
    }


    std::cout << "------AFTER SORTING------" << '\n';
    for(int i : result) {
        std::cout << i << '\n';
    }
}
// apparently quicksort is the most important to know, will revisit the other algos as currently there are more important things to learnű
// FIXME: undone algo
void QuickSort() {
    std::cout << "It sure is lonely here..." << '\n';
}

void Stack(const std::vector<int> &_A) {
    // LIFO - Last In First Out
    std::vector<int> A = _A;

    std::stack<int> stack;
    std::cout << "Size before pushing the array to the stack: " <<stack.size() << '\n';

    for(int i : A) {
        stack.push(i);
    }
    std::cout << "Size after filling up: "<< stack.size() << '\n';

    // traversing stack with pointers
    int* stackPtr = &stack.top();
    std::cout << "Pointing to top element: " << *stackPtr << '\n';
    stackPtr--;
    std::cout << "Still pointing to top element (which is different by now): " << *stackPtr << '\n';

    std::cout << "Before pop: " << stack.top() << '\n';
    stack.pop();
    std::cout << "After pop: " << stack.top() << '\n';
}
void Queue(const std::vector<int> &A) {
    std::queue<int> queue;

    for(int i : A) {
        queue.push(i);
    }

    // 3, 17 , 2, 15, 72, 15, 41, 67
    std::cout << "Front: " <<queue.front() << '\n';
    std::cout << "Back: " <<queue.back() << '\n';

    // remove first 3
    for (int i = 0; i < 3; ++i) {
        queue.pop();
    }

    // 15, 72, 15, 41, 67
    std::cout << "Front after pop: " << queue.front() << '\n';
    std::cout << "Back after pop: " << queue.back() << '\n';
}

int main() {
    std::vector<int> A = {3, 17 , 2, 15, 72, 15, 41, 67};
    std::vector<int> A_sorted = {2, 3, 15, 15, 17, 41, 67, 72};

    std::vector<int> B = {1, 54, 17, 29, 67, 31};

    /*
    Sum(A);
    Count(A);
    Decision(A);
    Selection(A);
    Copy(A);
    MaxValue(A);
    MinValue(A);

    Union(A, B);
    Intersection(A, B);

    LinearSearch(A);
    LogarithmicSearch(A_sorted);

    SelectionSort(A);
    AnotherSort(A);
    BubbleSort(A);

    // Quicksort
    std::vector<int> qs_array = {10, 7, 12, 6, 3, 2, 8};
    Quick(qs_array, MinValue(qs_array), MaxValue(qs_array));
    for(int i : qs_array) {
        std::cout << i << '\n';
    }

    Stack(A);
    Queue(A);
    */

    return 0;
}