#include <iostream>
#include <vector>

void sum() {
    // IN:
    std::vector<int> array = {1, 3, 6, 5};

    int sum{0};
    for (int i = 0; i < array.size(); ++i) {
        sum += array[i];
    }

    // OUT: 15
    std::cout << sum;
};
void decision() {
    // IN:
    std::vector<int> array = {3, 7 ,2, 15, 72, 35};
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
        std::cout << "Element with property T found!" << '\n';
    } else {
        std::cout << "No T property element found!" << '\n';
    }
}
void selection() {
    // we know that there is an element with the property inside the array
    //IN:
    std::vector<int> array = {3, 7 ,2, 15, 72, 35};
    int property{15};

    int i{0};
    while(array[i] != property) {
        i++;
    }

    // OUT:
    std::cout << i << '\n';
}

int main() {
    //sum();
    //decision();
    //selection();

    return 0;
}
