#include <iostream>
#include <vector>
#include <algorithm>

// FIXME: go through all functions and check the algos since i misinterpreted the pseudo code im working from

void Sum(const std::vector<int> &array) {
    // IN:;
    int sum{0};
    for (int i : array) {
        sum += i;
    }

    // OUT: 15
    std::cout << sum << '\n';
};
void Count(const std::vector<int> &array) {
    // IN:
    int property{15};

    int count{0};
    int i{0};
    while(i < array.size()) {
        if (array[i] == property) {
            count++;
        }
        i++;
    }

    // OUT:
    std::cout << count << '\n';
}
void Decision(const std::vector<int> &array) {
    // IN:
    int property{15};

    int i{0};
    // the main benefit of a while loop here is because we want to stop as soon as we found the very first element with the property
    // so we do not need to loop through the whole array itself
    // tldr; saves time and resources
    while(i < array.size() && array[i] != property) {
        i++;
    }

    // OUT:
    if(i < array.size()) {
        std::cout << "Element with property found!" << '\n';
    } else {
        std::cout << "No element found with the property!" << '\n';
    }
}
void Selection(const std::vector<int> &array) {
    // we know that there is an element with the property inside the array
    //IN:
    int property{15};

    int i{0};
    while(array[i] != property) {
        i++;
    }

    // OUT:
    std::cout << i << '\n';
}
void Copy(const std::vector<int> &array) {
    // IN:
    std::vector<int> new_array;
    int property{15};

    int amount{0};
    int i{0};
    while(i < array.size()) {
        if (array[i] == property) {
            new_array[amount] = array[i];
            amount++;
        }
        i++;
    }

    // OUT:
    for (int j : new_array) {
        std::cout << j << '\n';
    }
}
void Max(const std::vector<int> &array) {
    // IN:
    int result{0};

    for (int i = 1; i < array.size(); ++i) {
        if (array[result] < array[i]) {
            result = i;
        }
    }

    //OUT:
    std::cout << result << '\n';
}
void Min(const std::vector<int> &array) {
    // IN:
    int result{0};

    for (int i = 1; i < array.size(); ++i) {
        if (array[result] > array[i]) {
            result = i;
        }
    }

    //OUT:
    std::cout << result << '\n';
}

void Union(const std::vector<int> &A, const std::vector<int> &B) {
    // IN:
    // A, B arrays
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

    // OUT:
    // C
    for (int i : result) {
        std::cout << i << '\n';
    }
}
void Intersection(const std::vector<int> &A, const std::vector<int> &B) {
    std::vector<int> result;

    for (int a : A) {
        for (int b : B) {
            if (a == b) {
                result.push_back(a);
            }
        }
    }

    for (int i : result) {
        std::cout << i << '\n';
    }
}

void Linear_search(const std::vector<int> &array) {
    // linear_search == decision + selection
    // IN:
    int property{15};

    int result{0};
    int i{0};
    while(i < array.size() && array[i] != property) {
        i++;
    }
    // OUT:
    if (i < array.size()) {
        result = i;
    } else {
        result = -1;
    }

    std::cout << result << '\n';
}
void Logarithmic_search(const std::vector<int> &sorted_array) {
    // the input has to be sorted!
    // IN:
    int property{41};
    int result{0};
    int lower_range{0};
    int upper_range = sorted_array.size() -1;

    int i{0};
    do {
        i = (lower_range + upper_range) / 2;
        if(sorted_array[i] < property) {
            lower_range = i++;
        }
        if(sorted_array[i] > property) {
            upper_range = i--;
        }
    } while (lower_range <= upper_range && sorted_array[i] != property);

    if(lower_range <= upper_range) {
        result = i;
    } else {
        result = -1;
    }

    // OUT:
    std::cout << result << '\n';
}

int main() {
    std::vector<int> array = {3, 17 ,2, 15, 72, 15, 41, 67};
    std::vector<int> sorted_array = {2, 3, 15, 15, 17, 41, 67, 72};

    std::vector<int> other_array = {1, 54, 17, 29, 67, 31};

    /*
    Sum(array);
    Count(array);
    Decision(array);
    Selection(array);
    Copy(array);
    Max(array);
    Min(array);
    */
    
    /*
    Union(array, other_array);
    Intersection(array, other_array);
    /*

    /*
    Linear_search(array);
    Logarithmic_search(sorted_array);
    */

    return 0;
}