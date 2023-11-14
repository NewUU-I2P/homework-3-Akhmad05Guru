void problemSolution1(float consumed_water) {
    float cost;
    if(consumed_water <= 30){
        cost = consumed_water * 0.4 + 13
    }else if(consumed_water <= 50){
        cost = (consumed_water - 30) * 0.12 + 30 * 0.4 + 13;
    }else if(consumed_water <= 60){
        cost = (consumed



    return cost;
}
