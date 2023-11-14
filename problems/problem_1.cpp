void problemSolution1(float consumed_water) {
    float cost;
    if(consumed_water <= 30){
        cost = consumed_water * 0.4 + 13
    }
    else if(consumed_water <= 50){
        cost = (consumed_water - 30) * 0.12 + 30 * 0.4 + 13;
    }
    else if(consumed_water <= 60){
        cost = (consumed_water - 50) * 1.4 +20 * 0.12 + 30 * 0.4 + 13;
    }
    else{
        cost = (consumed_water - 60) * 1.5 + 10 * 1.4 + 20 * 0.12 + 30 * 0.4 + 13;
    }



    return cost;
}
