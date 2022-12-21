#include <iostream>
#include <vector>

void sum(const std::vector<int> &array) {
    // IN:;
    int sum{0};
    for (int i = 0; i < array.size(); ++i) {
        sum += array[i];
    }

    // OUT: 15
    std::cout << sum << '\n';
};
void decision(const std::vector<int> &array) {
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
void selection(const std::vector<int> &array) {
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
void count(const std::vector<int> &array) {
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

void linear_search(const std::vector<int> &array) {
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
void logarithmic_search(const std::vector<int> &sorted_array) {
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

void copy(const std::vector<int> &array) {
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
    for (int j = 0; j < new_array.size(); ++j) {
        std::cout << new_array[j] << '\n';
    }
}

int main() {
    std::vector<int> array = {3, 17 ,2, 15, 72, 15, 41, 67};
    std::vector<int> sorted_array = {2, 3, 15, 15, 17, 41, 67, 72};

    /*
    sum(array);
    decision(array);
    selection(array);
    count(array);
     */
    copy(array);

    /*
    linear_search(array);
    logarithmic_search(sorted_array);
    */



    return 0;
}
