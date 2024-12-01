#include <stdio.h>

// Heights = [100, 180, 260, 310, 40, 535, 695]
int main(){
    int heights[] = {100, 180, 260, 310, 40, 535, 695};
    int tHeight = 0;
    
    for (int i = 0; i < sizeof(heights)/sizeof(heights[0]) - 1; i++){
        if (heights[i + 1] > heights[i]){
            tHeight = tHeight + heights[i + 1] - heights[i];
        }else if(heights[i + 1] < heights[i]){
            tHeight = 0;
        }
    }
    printf("%d", tHeight);

    return 0;
}