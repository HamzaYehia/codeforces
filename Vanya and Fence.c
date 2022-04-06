/**
 * @problem name: Vanya and Fence
 * @problem link: https://codeforces.com/problemset/problem/677/A
 *
 * @solution status: accepted
 * @solution time complexity: O(n) Linear
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date 2022-Apr-6
 */



#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int number_of_friends, fence_height,
        required_minimum_width = 0;

    scanf("%d %d", &number_of_friends, &fence_height);

    int* friends_heights = (int*)malloc(number_of_friends * sizeof(int));

    for (int i = 0; i < number_of_friends; i++) {
        scanf("%d", &friends_heights[i]);
    }


    for (int i = 0; i < number_of_friends; i++) {

        if (friends_heights[i] > fence_height) {
            required_minimum_width += 2;
        }
        else { // <= fence_height
            required_minimum_width += 1;
        }
    }

    printf("%d\n", required_minimum_width);

    //free(friends_heights);
    return 0;
}
