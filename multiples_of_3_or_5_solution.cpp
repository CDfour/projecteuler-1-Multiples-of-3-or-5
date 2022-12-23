#include "multiples_of_3_or_5_solution.h"

// max = 1000	answer = 233168
int multiples_of_3_or_5_solution(int max) {

    int result = 0;

    for (int i = 0; i < max; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }

    return result;
}